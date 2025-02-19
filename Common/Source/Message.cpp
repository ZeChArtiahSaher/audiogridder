/*
 * Copyright (c) 2020 Andreas Pohl
 * Licensed under MIT (https://github.com/apohl79/audiogridder/blob/master/COPYING)
 *
 * Author: Andreas Pohl
 */

#if defined(AG_PLUGIN) || defined(AG_SERVER)

#include "Message.hpp"
#include <sys/types.h>
#include <cstddef>
#include "Metrics.hpp"

#ifdef JUCE_WINDOWS
#include <windows.h>
#else
#include <sys/socket.h>
#include <fcntl.h>
#endif

namespace e47 {

bool send(StreamingSocket* socket, const char* data, int size, MessageHelper::Error* e, Meter* metric) {
    setLogTagStatic("send");
    traceScope();
    if (nullptr != socket && socket->isConnected()) {
        int toWrite = size;
        int offset = 0;
        int maxTries = 10;
        do {
            int ret = socket->waitUntilReady(false, 100);
            if (ret < 0) {
                MessageHelper::seterr(e, MessageHelper::E_SYSCALL);
                traceln("waitUntilReady failed: E_SYSCALL");
                return false;  // error
            } else if (ret > 0) {
                int len = socket->write(data + offset, toWrite);
                if (len < 0) {
                    MessageHelper::seterr(e, MessageHelper::E_SYSCALL);
                    traceln("write failed: E_SYSCALL");
                    return false;
                }
                offset += len;
                toWrite -= len;
            } else {
                maxTries--;
            }
        } while (toWrite > 0 && maxTries > 0);
        if (toWrite > 0) {
            MessageHelper::seterr(e, MessageHelper::E_TIMEOUT);
            traceln("failed: E_TIMEOUT");
            return false;
        }
        if (nullptr != metric) {
            metric->increment((uint32)size);
        }
        return true;
    } else {
        MessageHelper::seterr(e, MessageHelper::E_STATE);
        traceln("failed: E_STATE");
        return false;
    }
}

bool read(StreamingSocket* socket, void* data, int size, int timeoutMilliseconds, MessageHelper::Error* e,
          Meter* metric) {
    setLogTagStatic("read");
    traceScope();
    if (timeoutMilliseconds == 0) {
        traceln("warning, blocking read");
    }
    MessageHelper::seterr(e, MessageHelper::E_NONE);
    if (nullptr != socket && !socket->isConnected()) {
        MessageHelper::seterr(e, MessageHelper::E_STATE);
        traceln("failed: E_STATE");
        return false;
    }
    auto now = Time::getMillisecondCounterHiRes();
    auto until = now;
    if (timeoutMilliseconds > 0) {
        until += timeoutMilliseconds;
    }
    int toRead = size;
    while (toRead > 0 && now <= until) {
        int ret = socket->waitUntilReady(true, 100);
        if (ret < 0) {
            MessageHelper::seterr(e, MessageHelper::E_SYSCALL);
            traceln("waitUntilReady failed: E_SYSCALL");
            return false;  // error
        } else if (ret > 0) {
            int len = socket->read(static_cast<char*>(data) + size - toRead, toRead, timeoutMilliseconds == 0);
            if (len < 0) {
#ifdef JUCE_WINDOWS
                bool isError = timeoutMilliseconds == 0 || WSAGetLastError() != WSAEWOULDBLOCK;
#else
                bool isError = timeoutMilliseconds == 0 || errno != EAGAIN;
#endif
                if (isError) {
                    MessageHelper::seterr(e, MessageHelper::E_SYSCALL);
                    traceln("read failed: E_SYSCALL");
                    return false;
                }
            } else if (len == 0) {
                MessageHelper::seterr(e, MessageHelper::E_DATA);
                traceln("failed: E_DATA");
                return false;
            }
            toRead -= len;
        }
        now = Time::getMillisecondCounterHiRes();
    }
    if (toRead == 0) {
        if (nullptr != metric) {
            metric->increment((uint32)size);
        }
        return true;
    } else {
        MessageHelper::seterr(e, MessageHelper::E_TIMEOUT);
        traceln("failed: E_TIMEOUT");
        return false;
    }
}

bool setNonBlocking(int handle) noexcept {
#ifdef JUCE_WINDOWS
    DWORD nonBlocking = 1;
    return ioctlsocket(handle, FIONBIO, &nonBlocking) == 0;
#else
    int socketFlags = fcntl(handle, F_GETFL, 0);
    if (socketFlags == -1) {
        return false;
    }
    socketFlags &= ~O_NONBLOCK;
    return fcntl(handle, F_SETFL, socketFlags) == 0;
#endif
}

StreamingSocket* accept(StreamingSocket* master, int timeoutMs, std::function<bool()> abortFn) {
    TimeStatistic::Timeout timeout(timeoutMs);
    do {
        if (master->waitUntilReady(true, 20) > 0) {
            auto sock = master->waitForNextConnection();
            if (nullptr != sock) {
                return sock;
            }
        }
        if (nullptr != abortFn && abortFn()) {
            return nullptr;
        }
    } while (timeout.getMillisecondsLeft() > 0);
    return nullptr;
}

}  // namespace e47

#endif
