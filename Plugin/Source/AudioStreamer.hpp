/*
 * Copyright (c) 2020 Andreas Pohl
 * Licensed under MIT (https://github.com/apohl79/audiogridder/blob/master/COPYING)
 *
 * Author: Andreas Pohl
 */

#ifndef AudioStreamer_hpp
#define AudioStreamer_hpp

template <typename T>
class AudioStreamer : public Thread {
  public:
    struct AudioMidiBuffer {
        AudioBuffer<T> audio;
        MidiBuffer midi;
        AudioPlayHead::CurrentPositionInfo posInfo;
    };

    Client* client;
    StreamingSocket* socket;
    boost::lockfree::spsc_queue<AudioMidiBuffer> writeQ, readQ;
    std::mutex writeMtx, readMtx;
    std::condition_variable writeCv, readCv;

    AudioMidiBuffer workingSendBuf, workingReadBuf;
    int workingSendSamples = 0;
    int workingReadSamples = 0;

    std::atomic_bool error{false};

    AudioStreamer(Client* clnt, StreamingSocket* sock)
        : Thread("AudioStreamer"),
          client(clnt),
          socket(sock),
          writeQ(clnt->NUM_OF_BUFFERS * 2),
          readQ(clnt->NUM_OF_BUFFERS * 2) {
        for (int i = 0; i < clnt->NUM_OF_BUFFERS; i++) {
            AudioMidiBuffer buf;
            buf.audio.setSize(clnt->m_channels, clnt->m_samplesPerBlock);
            buf.audio.clear();
            readQ.push(std::move(buf));
        }
        workingSendBuf.audio.clear();
        workingReadBuf.audio.clear();
    }

    ~AudioStreamer() {
        signalThreadShouldExit();
        notifyWrite();
        notifyRead();
        stopThread(100);
    }

    void setError() {
        socket->close();
        error = true;
        client->m_error = true;
        notifyRead();
        notifyWrite();
    }
    void notifyWrite() {
        std::lock_guard<std::mutex> lock(writeMtx);
        writeCv.notify_one();
    }

    void waitWrite() {
        if (writeQ.read_available() == 0 && !error) {
            std::unique_lock<std::mutex> lock(writeMtx);
            writeCv.wait(lock, [this] { return writeQ.read_available() > 0 || currentThreadShouldExit(); });
        }
    }

    void notifyRead() {
        std::lock_guard<std::mutex> lock(readMtx);
        readCv.notify_one();
    }

    void waitRead() {
        if (client->NUM_OF_BUFFERS > 1 && readQ.read_available() < (client->NUM_OF_BUFFERS / 2) &&
            readQ.read_available() > 0) {
            std::cerr << "warning: instance (" << client->getLoadedPluginsString() << "): input buffer below 50% ("
                      << readQ.read_available() << "/" << client->NUM_OF_BUFFERS << ")" << std::endl;
        } else if (readQ.read_available() == 0) {
            if (client->NUM_OF_BUFFERS > 1) {
                std::cerr << "warning: instance (" << client->getLoadedPluginsString()
                          << "): read queue empty, waiting for data, try increasing the NumberOfBuffers value"
                          << std::endl;
            }
            if (!error) {
                std::unique_lock<std::mutex> lock(readMtx);
                readCv.wait(lock, [this] { return readQ.read_available() > 0 || currentThreadShouldExit(); });
            }
        }
    }

    void run() {
        while (!currentThreadShouldExit() && !error && socket->isConnected()) {
            while (writeQ.read_available() > 0) {
                AudioMidiBuffer buf;
                writeQ.pop(buf);
                if (!sendReal(buf)) {
                    std::cerr << "error: instance (" << client->getLoadedPluginsString() << "): send failed"
                              << std::endl;
                    setError();
                    return;
                }
                MessageHelper::Error err;
                if (!readReal(buf, &err)) {
                    std::cerr << "error: instance (" << client->getLoadedPluginsString()
                              << "): read failed, error code " << err << std::endl;
                    setError();
                    return;
                }
                readQ.push(std::move(buf));
                notifyRead();
            }
            waitWrite();
        }
    }

    void send(AudioBuffer<T>& buffer, MidiBuffer& midi, AudioPlayHead::CurrentPositionInfo& posInfo) {
        if (error) {
            return;
        }
        if (client->NUM_OF_BUFFERS > 1) {
            if (buffer.getNumSamples() == client->m_samplesPerBlock && workingSendSamples == 0) {
                AudioMidiBuffer buf;
                buf.audio.makeCopyOf(buffer);
                buf.midi.addEvents(midi, 0, midi.getNumEvents(), 0);
                buf.posInfo = posInfo;
                writeQ.push(std::move(buf));
                notifyWrite();
            } else {
                copyToWorkingBuffer(workingSendBuf, workingSendSamples, buffer, midi);
                if (workingSendSamples >= client->m_samplesPerBlock) {
                    AudioMidiBuffer buf;
                    buf.audio.setSize(client->m_channels, client->m_samplesPerBlock);
                    for (int chan = 0; chan < client->m_channels; chan++) {
                        buf.audio.copyFrom(chan, 0, workingSendBuf.audio, chan, 0, client->m_samplesPerBlock);
                    }
                    buf.midi.addEvents(workingSendBuf.midi, 0, workingSendBuf.midi.getNumEvents(), 0);
                    buf.posInfo = posInfo;
                    writeQ.push(std::move(buf));
                    notifyWrite();
                    workingSendSamples -= client->m_samplesPerBlock;
                    if (workingSendSamples > 0) {
                        shiftSamplesToFront(workingSendBuf.audio, client->m_samplesPerBlock, workingSendSamples);
                    }
                    workingSendBuf.midi.clear();
                }
            }
        } else {
            AudioMidiBuffer buf;
            buf.audio.makeCopyOf(buffer);
            buf.midi.addEvents(midi, 0, midi.getNumEvents(), 0);
            buf.posInfo = posInfo;
            if (!sendReal(buf)) {
                std::cerr << "error: instance (" << client->getLoadedPluginsString() << "): send failed" << std::endl;
                setError();
            }
        }
    }

    void read(AudioBuffer<T>& buffer, MidiBuffer& midi) {
        if (error) {
            return;
        }
        AudioMidiBuffer buf;
        if (client->NUM_OF_BUFFERS > 1) {
            if (buffer.getNumSamples() == client->m_samplesPerBlock && workingReadSamples == 0) {
                waitRead();
                readQ.pop(buf);
                buffer.makeCopyOf(buf.audio);
                midi.clear();
                midi.addEvents(buf.midi, 0, buf.midi.getNumEvents(), 0);
            } else {
                if (workingReadSamples < buffer.getNumSamples()) {
                    waitRead();
                    readQ.pop(buf);
                    copyToWorkingBuffer(workingReadBuf, workingReadSamples, buf.audio, buf.midi);
                }
                for (int chan = 0; chan < buffer.getNumChannels(); chan++) {
                    buffer.copyFrom(chan, 0, workingReadBuf.audio, chan, 0, buffer.getNumSamples());
                }
                workingReadSamples -= buffer.getNumSamples();
                if (workingReadSamples > 0) {
                    shiftSamplesToFront(workingReadBuf.audio, buffer.getNumSamples(), workingReadSamples);
                }
                midi.clear();
                midi.addEvents(buf.midi, 0, workingReadBuf.midi.getNumEvents(), 0);
                workingReadBuf.midi.clear();
            }
        } else {
            buf.audio.setSize(buffer.getNumChannels(), buffer.getNumSamples());
            MessageHelper::Error err;
            if (!readReal(buf, &err)) {
                std::cerr << "error: instance (" << client->getLoadedPluginsString() << "): read failed, error code "
                          << err << std::endl;
                setError();
                return;
            }
            buffer.makeCopyOf(buf.audio);
            midi.clear();
            midi.addEvents(buf.midi, 0, buf.midi.getNumEvents(), 0);
        }
    }

    void copyToWorkingBuffer(AudioMidiBuffer& dst, int& workingSamples, AudioBuffer<T>& src, MidiBuffer& midi) {
        if ((dst.audio.getNumSamples() - workingSamples) < src.getNumSamples()) {
            dst.audio.setSize(src.getNumChannels(), workingSamples + src.getNumSamples(), true);
        }
        for (int chan = 0; chan < src.getNumChannels(); chan++) {
            dst.audio.copyFrom(chan, workingSamples, src, chan, 0, src.getNumSamples());
        }
        workingSamples += src.getNumSamples();
        dst.midi.addEvents(midi, 0, midi.getNumEvents(), 0);
    }

    void shiftSamplesToFront(AudioBuffer<T>& buf, int start, int num) {
        if (start + num <= buf.getNumSamples()) {
            for (int chan = 0; chan < buf.getNumChannels(); chan++) {
                for (int s = 0; s < num; s++) {
                    buf.setSample(chan, s, buf.getSample(chan, start + s));
                }
            }
        }
    }

    bool sendReal(AudioMidiBuffer& buffer) {
        AudioMessage msg;
        if (nullptr != socket) {
            return msg.sendToServer(socket, buffer.audio, buffer.midi, buffer.posInfo);
        } else {
            return false;
        }
    }

    bool readReal(AudioMidiBuffer& buffer, MessageHelper::Error* e) {
        AudioMessage msg;
        bool success = false;
        if (nullptr != socket) {
            success = msg.readFromServer(socket, buffer.audio, buffer.midi, e);
        }
        if (success) {
            client->m_latency = msg.getLatencySamples();
        }
        return success;
    }
};

#endif /* AudioStreamer_hpp */
