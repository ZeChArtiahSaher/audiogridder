/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 6.0.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "Images.hpp"

//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
Images::Images() {
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    //[UserPreSize]
    //[/UserPreSize]

    setSize(600, 400);

    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

Images::~Images() {
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Images::paint(juce::Graphics& g) {
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll(juce::Colour(0xff323e44));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void Images::resized() {
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]

//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="Images" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: server_png, 4317, "Resources/server.png"
static const unsigned char resource_Images_server_png[] = {
    137, 80,  78,  71,  13,  10,  26,  10,  0,   0,   0,   13,  73,  72,  68,  82,  0,   0,   1,   214, 0,   0,   1,
    214, 8,   6,   0,   0,   0,   202, 26,  168, 90,  0,   0,   1,   131, 105, 67,  67,  80,  73,  67,  67,  32,  112,
    114, 111, 102, 105, 108, 101, 0,   0,   40,  145, 125, 145, 61,  72,  195, 64,  28,  197, 95,  83,  165, 42,  21,
    65,  59,  136, 56,  100, 168, 78,  22,  68,  69,  28,  181, 10,  69,  168, 16,  106, 133, 86,  29,  76,  46,  253,
    130, 38,  13,  73,  138, 139, 163, 224, 90,  112, 240, 99,  177, 234, 224, 226, 172, 171, 131, 171, 32,  8,   126,
    128, 56,  57,  58,  41,  186, 72,  137, 255, 75,  10,  45,  98,  60,  56,  238, 199, 187, 123, 143, 187, 119, 128,
    80,  47,  51,  205, 234, 24,  7,   52,  221, 54,  83,  137, 184, 152, 201, 174, 138, 161, 87,  8,   232, 71,  55,
    66,  8,   200, 204, 50,  230, 36,  41,  9,   223, 241, 117, 143, 0,   95,  239, 98,  60,  203, 255, 220, 159, 163,
    87,  205, 89,  12,  8,   136, 196, 179, 204, 48,  109, 226, 13,  226, 233, 77,  219, 224, 188, 79,  28,  97,  69,
    89,  37,  62,  39,  30,  51,  233, 130, 196, 143, 92,  87,  60,  126, 227, 92,  112, 89,  224, 153, 17,  51,  157,
    154, 39,  142, 16,  139, 133, 54,  86,  218, 152, 21,  77,  141, 120, 138, 56,  170, 106, 58,  229, 11,  25,  143,
    85,  206, 91,  156, 181, 114, 149, 53,  239, 201, 95,  24,  206, 233, 43,  203, 92,  167, 57,  140, 4,   22,  177,
    4,   9,   34,  20,  84,  81,  66,  25,  54,  98,  180, 234, 164, 88,  72,  209, 126, 220, 199, 63,  228, 250, 37,
    114, 41,  228, 42,  129, 145, 99,  1,   21,  104, 144, 93,  63,  248, 31,  252, 238, 214, 202, 79,  78,  120, 73,
    225, 56,  208, 249, 226, 56,  31,  35,  64,  104, 23,  104, 212, 28,  231, 251, 216, 113, 26,  39,  64,  240, 25,
    184, 210, 91,  254, 74,  29,  152, 249, 36,  189, 214, 210, 162, 71,  64,  223, 54,  112, 113, 221, 210, 148, 61,
    224, 114, 7,   24,  124, 50,  100, 83,  118, 165, 32,  77,  33,  159, 7,   222, 207, 232, 155, 178, 192, 192, 45,
    208, 179, 230, 245, 214, 220, 199, 233, 3,   144, 166, 174, 146, 55,  192, 193, 33,  48,  90,  160, 236, 117, 159,
    119, 119, 181, 247, 246, 239, 153, 102, 127, 63,  198, 207, 114, 98,  95,  44,  180, 84,  0,   0,   0,   9,   112,
    72,  89,  115, 0,   0,   46,  35,  0,   0,   46,  35,  1,   120, 165, 63,  118, 0,   0,   0,   7,   116, 73,  77,
    69,  7,   228, 2,   18,  9,   11,  6,   196, 151, 120, 49,  0,   0,   0,   25,  116, 69,  88,  116, 67,  111, 109,
    109, 101, 110, 116, 0,   67,  114, 101, 97,  116, 101, 100, 32,  119, 105, 116, 104, 32,  71,  73,  77,  80,  87,
    129, 14,  23,  0,   0,   14,  200, 73,  68,  65,  84,  120, 218, 237, 221, 127, 172, 221, 245, 93,  199, 241, 215,
    251, 246, 2,   163, 12,  199, 58,  247, 19,  90,  80,  230, 54,  148, 41,  21,  20,  22,  72,  179, 202, 18,  55,
    255, 97,  115, 99,  163, 108, 174, 155, 3,   137, 66,  50,  53,  26,  77,  52,  89,  66,  98,  48,  49,  226, 50,
    50,  7,   46,  206, 50,  48,  142, 140, 33,  211, 68,  227, 48,  173, 20,  66,  135, 150, 1,   70,  134, 70,  126,
    108, 109, 135, 13,  24,  41,  27,  208, 209, 246, 222, 143, 127, 220, 19,  255, 48,  49,  115, 201, 57,  247, 158,
    207, 247, 251, 120, 36,  75,  246, 23,  249, 126, 223, 223, 119, 206, 243, 126, 78,  239, 61,  39,  1,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   96,  190,
    212, 152, 110, 182, 181, 182, 152, 228, 140, 36,  27,  147, 156, 156, 100, 189, 21,  0,   152, 170, 99,  73,  14,
    37,  57,  144, 228, 137, 170, 58,  34,  172, 195, 10,  105, 37,  57,  63,  201, 37,  73,  182, 38,  249, 201, 36,
    199, 217, 123, 128, 85,  113, 52,  201, 195, 73,  118, 38,  185, 51,  201, 87,  171, 170, 9,   107, 159, 65,  61,
    49,  201, 21,  73,  174, 73,  242, 38,  187, 13,  48,  23,  254, 61,  201, 167, 147, 124, 182, 170, 94,  20,  214,
    62,  130, 186, 144, 100, 123, 146, 223, 79,  242, 26,  59,  12,  48,  151, 14,  38,  249, 157, 36,  59,  170, 106,
    89,  88,  231, 55,  170, 27,  147, 220, 154, 100, 139, 157, 5,   232, 194, 63,  36,  217, 94,  85,  251, 132, 117,
    254, 162, 250, 142, 36,  183, 37,  217, 96,  79,  1,   186, 242, 95,  73,  46,  173, 170, 157, 67,  185, 161, 133,
    1,   68,  245, 3,   73,  254, 70,  84,  1,   186, 180, 33,  201, 223, 77,  94,  203, 157, 88,  231, 32,  170, 239,
    73,  114, 251, 16,  126, 64,  0,   24,  185, 229, 201, 201, 245, 14,  97,  93,  187, 168, 94,  144, 149, 247, 231,
    79,  176, 143, 0,   131, 240, 221, 36,  91,  170, 234, 159, 132, 117, 245, 163, 186, 33,  201, 131, 73,  54,  217,
    67,  128, 65,  217, 151, 228, 156, 170, 122, 182, 215, 27,  232, 245, 45,  212, 79,  138, 42,  192, 32,  109, 74,
    114, 189, 19,  235, 234, 158, 86,  183, 36,  185, 219, 238, 1,   12,  218, 133, 85,  117, 159, 19,  235, 234, 248,
    61,  251, 6,   48,  120, 215, 57,  177, 174, 206, 105, 245, 162, 36,  247, 216, 55,  128, 81,  120, 91,  85,  125,
    213, 137, 117, 182, 174, 180, 103, 0,   163, 113, 149, 19,  235, 108, 79,  171, 235, 147, 60,  157, 228, 36,  187,
    6,   48,  10,  223, 73,  242, 234, 170, 122, 201, 137, 117, 54,  46,  20,  85,  128, 81,  57,  121, 242, 218, 223,
    149, 158, 194, 250, 118, 59,  6,   48,  58,  221, 125, 177, 74,  79,  97,  125, 171, 253, 2,   24,  157, 115, 132,
    117, 118, 124, 97,  57,  192, 248, 188, 81,  88,  103, 199, 23,  151, 3,   140, 207, 235, 132, 117, 118, 94,  110,
    191, 0,   70,  167, 187, 215, 254, 46,  194, 218, 90,  171, 36,  199, 217, 47,  128, 209, 89,  20,  86,  0,   24,
    49,  97,  5,   0,   97,  5,   0,   97,  5,   0,   97,  5,   0,   132, 21,  0,   132, 21,  0,   132, 21,  0,   16,
    86,  0,   16,  86,  0,   16,  86,  0,   16,  86,  0,   64,  88,  1,   64,  88,  1,   64,  88,  1,   0,   97,  5,
    0,   97,  5,   0,   97,  5,   0,   97,  5,   0,   132, 21,  0,   230, 196, 98,  39,  215, 89,  29,  205, 244, 190,
    36,  127, 212, 201, 181, 254, 70,  146, 243, 59,  185, 214, 75,  71,  126, 255, 128, 176, 142, 214, 254, 170, 186,
    189, 135, 11,  109, 173, 93,  214, 75,  88,  102, 49,  211, 158, 238, 31,  232, 135, 183, 130, 1,   64,  88,  1,
    64,  88,  1,   64,  88,  1,   0,   97,  5,   0,   97,  5,   0,   97,  5,   0,   132, 21,  0,   132, 21,  0,   132,
    21,  0,   132, 21,  0,   16,  86,  0,   16,  86,  0,   16,  86,  0,   64,  88,  1,   64,  88,  1,   64,  88,  1,
    64,  88,  1,   0,   97,  5,   0,   97,  253, 190, 148, 71,  5,   128, 176, 2,   128, 176, 2,   0,   194, 10,  0,
    194, 10,  0,   194, 10,  0,   8,   43,  0,   8,   43,  0,   8,   43,  0,   8,   43,  0,   32,  172, 0,   32,  172,
    0,   32,  172, 0,   128, 176, 2,   128, 176, 2,   128, 176, 2,   128, 176, 26,  1,   0,   8,   43,  0,   8,   43,
    0,   8,   43,  0,   32,  172, 0,   32,  172, 255, 183, 242, 168, 0,   16,  172, 41,  105, 173, 45,  38,  57,  234,
    113, 1,   140, 206, 82,  85,  45,  58,  177, 2,   192, 72,  9,   43,  0,   8,   43,  0,   8,   43,  0,   8,   43,
    0,   32,  172, 0,   32,  172, 0,   32,  172, 0,   128, 176, 2,   128, 176, 2,   128, 176, 2,   128, 176, 2,   0,
    194, 10,  0,   194, 10,  0,   194, 10,  0,   8,   43,  0,   8,   43,  0,   8,   43,  0,   8,   43,  0,   32,  172,
    0,   32,  172, 223, 151, 101, 143, 10,  96,  148, 154, 176, 206, 64,  85,  45,  39,  57,  108, 191, 0,   70,  167,
    187, 215, 254, 158, 222, 10,  62,  100, 191, 0,   70,  231, 63,  133, 117, 118, 30,  179, 95,  0,   163, 243, 164,
    176, 206, 206, 163, 246, 11,  96,  116, 254, 69,  88,  103, 231, 30,  251, 5,   48,  58,  247, 245, 118, 193, 213,
    203, 133, 182, 214, 222, 144, 228, 91,  118, 12,  96,  52,  150, 147, 188, 182, 170, 186, 250, 119, 214, 110, 78,
    172, 85,  245, 84,  146, 187, 237, 25,  192, 104, 236, 234, 45,  170, 93,  133, 117, 98,  135, 61,  3,   24,  141,
    207, 245, 120, 209, 213, 211, 197, 182, 214, 78,  72,  242, 120, 146, 83,  237, 27,  192, 160, 237, 79,  114, 102,
    85,  29,  117, 98,  157, 229, 79,  1,   85,  47,  37,  185, 206, 190, 1,   12,  222, 181, 61,  70,  181, 187, 19,
    235, 228, 212, 186, 152, 100, 111, 146, 159, 176, 119, 0,   131, 244, 181, 36,  63,  93,  85,  75,  61,  94,  124,
    119, 31,  194, 95,  85,  199, 146, 92,  145, 228, 168, 221, 3,   24,  156, 35,  73,  62,  214, 107, 84,  187, 12,
    235, 36,  174, 123, 147, 252, 166, 253, 3,   24,  156, 95,  175, 170, 135, 122, 190, 129, 158, 191, 54,  238, 83,
    73,  110, 180, 131, 0,   131, 241, 233, 36,  127, 220, 251, 77,  84,  207, 23,  223, 90,  91,  151, 149, 63,  193,
    249, 144, 125, 4,   232, 218, 205, 73,  126, 113, 242, 109, 102, 93,  235, 250, 139, 206, 39,  239, 193, 111, 79,
    114, 189, 157, 4,   232, 214, 31,  12,  37,  170, 221, 159, 88,  255, 215, 233, 117, 91,  146, 63,  73,  242, 114,
    59,  10,  208, 133, 111, 39,  249, 165, 170, 186, 109, 72,  55,  181, 48,  148, 27,  169, 170, 191, 72,  114, 118,
    146, 59,  237, 42,  192, 220, 251, 203, 36,  103, 15,  45,  170, 131, 10,  235, 36,  174, 223, 172, 170, 247, 36,
    121, 123, 146, 187, 236, 45,  192, 220, 249, 251, 36,  91,  170, 234, 231, 171, 106, 255, 16,  111, 176, 134, 252,
    244, 90,  107, 111, 201, 202, 47,  54,  93,  50,  57,  205, 2,   176, 250, 190, 158, 149, 119, 19,  111, 169, 170,
    127, 29,  250, 205, 214, 88,  158, 106, 107, 237, 181, 73,  206, 75,  242, 230, 36,  155, 146, 156, 156, 228, 36,
    251, 14,  48,  85,  71,  146, 28,  202, 202, 103, 253, 62,  154, 100, 111, 85,  29,  52,  22,  0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   248, 94,  106, 44,  55,  218, 90,  219, 152, 228, 188, 36,  111, 78,  178, 49,  201, 201, 73,  214,
    91,  1,   128, 169, 58,  150, 228, 80,  146, 3,   73,  30,  77,  178, 55,  201, 190, 170, 106, 194, 58,  140, 152,
    190, 53,  201, 135, 147, 188, 59,  201, 27,  237, 59,  192, 154, 120, 60,  201, 151, 147, 124, 190, 170, 30,  22,
    214, 254, 98,  90,  73,  222, 145, 228, 119, 147, 108, 177, 207, 0,   115, 229, 222, 36,  215, 86,  213, 93,  194,
    218, 71,  84,  127, 56,  201, 13,  73,  126, 206, 238, 2,   204, 181, 191, 77,  114, 117, 85,  61,  41,  172, 243,
    27,  213, 15,  39,  249, 76,  252, 187, 41,  64,  47,  94,  72,  242, 43,  85,  245, 249, 33,  221, 212, 194, 0,
    130, 186, 208, 90,  251, 84,  146, 155, 69,  21,  160, 43,  39,  37,  185, 185, 181, 246, 201, 214, 218, 58,  39,
    214, 249, 136, 234, 186, 36,  183, 36,  217, 102, 63,  1,   186, 246, 231, 73,  182, 87,  213, 146, 19,  235, 218,
    69,  181, 178, 242, 214, 175, 168, 2,   244, 239, 131, 73,  62,  51,  121, 109, 23,  214, 53,  242, 107, 73,  174,
    180, 139, 0,   131, 113, 101, 146, 143, 247, 126, 19,  93,  254, 100, 208, 90,  59,  63,  43,  191, 178, 189, 104,
    15,  1,   6,   229, 88,  146, 11,  170, 234, 1,   97,  93,  189, 168, 30,  151, 228, 107, 73,  206, 182, 127, 0,
    131, 244, 207, 73,  206, 173, 170, 99,  61,  94,  124, 143, 111, 5,   255, 178, 168, 2,   12,  218, 143, 39,  185,
    194, 137, 117, 117, 78,  171, 39,  36,  121, 50,  201, 235, 237, 29,  192, 160, 61,  149, 228, 135, 170, 234, 136,
    19,  235, 108, 93,  46,  170, 0,   163, 240, 134, 36,  239, 239, 241, 194, 123, 11,  235, 118, 187, 6,   48,  26,
    31,  235, 241, 162, 187, 121, 43,  184, 181, 246, 250, 201, 91,  3,   0,   140, 67,  75,  242, 186, 170, 122, 218,
    137, 117, 54,  126, 198, 142, 1,   140, 74,  37,  185, 184, 183, 139, 238, 41,  172, 23,  217, 49,  128, 209, 121,
    155, 176, 206, 206, 91,  236, 23,  192, 232, 116, 247, 231, 149, 61,  133, 245, 76,  251, 5,   48,  58,  103, 8,
    235, 236, 156, 98,  191, 0,   70,  231, 7,   123, 187, 224, 158, 126, 43,  120, 57,  3,   250, 98,  118, 0,   254,
    95,  142, 85,  213, 113, 78,  172, 35,  255, 33,  0,   128, 241, 190, 246, 47,  120, 102, 0,   32,  172, 0,   32,
    172, 0,   32,  172, 0,   128, 176, 2,   128, 176, 2,   128, 176, 2,   0,   194, 10,  0,   194, 10,  0,   194, 10,
    0,   194, 10,  0,   8,   43,  0,   8,   43,  0,   8,   43,  0,   32,  172, 0,   32,  172, 0,   32,  172, 0,   32,
    172, 0,   128, 176, 2,   128, 176, 2,   128, 176, 242, 61,  221, 86,  157, 72,  242, 165, 94,  134, 58,  246, 251,
    7,   132, 21,  0,   132, 21,  0,   16,  86,  0,   16,  86,  0,   16,  86,  0,   64,  88,  1,   64,  88,  1,   64,
    88,  1,   64,  88,  1,   0,   97,  5,   0,   97,  5,   0,   97,  5,   0,   132, 21,  0,   132, 21,  0,   132, 21,
    0,   16,  86,  0,   16,  86,  0,   16,  86,  0,   16,  86,  0,   64,  88,  1,   64,  88,  1,   64,  88,  1,   0,
    97,  5,   0,   97,  5,   0,   97,  5,   0,   97,  5,   0,   132, 21,  0,   132, 21,  0,   132, 21,  0,   16,  86,
    0,   16,  86,  0,   16,  86,  0,   16,  86,  0,   64,  88,  1,   64,  88,  1,   64,  88,  1,   0,   97,  5,   0,
    97,  5,   0,   97,  5,   0,   97,  53,  2,   0,   16,  86,  0,   152, 75,  139, 70,  48,  117, 167, 183, 214, 46,
    235, 228, 90,  55,  246, 50,  212, 25,  205, 116, 163, 117, 5,   166, 173, 58,  122, 97,  109, 30,  23,  192, 232,
    44,  85,  85,  87,  135, 64,  111, 5,   3,   128, 176, 2,   128, 176, 2,   128, 176, 2,   0,   194, 10,  0,   194,
    10,  0,   194, 10,  0,   8,   43,  0,   8,   43,  0,   8,   43,  0,   8,   43,  0,   32,  172, 0,   32,  172, 0,
    32,  172, 0,   128, 176, 2,   128, 176, 2,   128, 176, 2,   128, 176, 2,   0,   194, 10,  0,   194, 10,  0,   194,
    186, 150, 154, 199, 5,   48,  58,  199, 132, 117, 118, 94,  176, 95,  0,   163, 243, 188, 176, 206, 206, 65,  251,
    5,   48,  58,  221, 189, 246, 247, 20,  214, 199, 236, 23,  192, 232, 116, 247, 218, 223, 83,  88,  31,  180, 95,
    0,   163, 211, 221, 107, 127, 79,  97,  189, 199, 126, 1,   140, 206, 238, 222, 46,  184, 122, 185, 208, 214, 218,
    250, 36,  207, 36,  89,  111, 207, 0,   70,  225, 185, 36,  175, 169, 170, 35,  78,  172, 179, 248, 9,   160, 234,
    197, 36,  119, 218, 51,  128, 209, 248, 82,  111, 81,  237, 42,  172, 19,  55,  218, 51,  128, 209, 184, 169, 199,
    139, 238, 45,  172, 247, 38,  217, 99,  215, 0,   6,   111, 87,  85,  253, 99,  143, 23,  94,  189, 93,  112, 107,
    109, 75,  146, 187, 237, 28,  192, 160, 93,  80,  85,  247, 59,  177, 174, 198, 79,  2,   85,  187, 147, 220, 106,
    231, 0,   6,   235, 79,  123, 141, 106, 151, 39,  214, 201, 169, 245, 149, 73,  30,  78,  178, 209, 254, 1,   12,
    202, 147, 73,  54,  87,  213, 115, 189, 222, 64,  151, 223, 110, 83,  85,  207, 38,  185, 52,  201, 75,  118, 16,
    96,  48,  14,  39,  121, 111, 207, 81,  237, 54,  172, 147, 184, 222, 159, 228, 242, 36,  203, 118, 17,  160, 123,
    75,  73,  62,  80,  85,  221, 127, 202, 94,  215, 223, 199, 90,  85,  119, 36,  217, 150, 14,  191, 86,  8,   128,
    255, 113, 36,  201, 251, 171, 234, 175, 135, 112, 51,  53,  132, 155, 104, 173, 109, 77,  242, 197, 36,  175, 178,
    159, 0,   93,  121, 58,  201, 251, 170, 106, 48,  31,  91,  187, 48,  132, 155, 168, 170, 93,  73,  54,  39,  217,
    101, 71,  1,   186, 241, 149, 172, 252, 162, 210, 160, 62,  11,  126, 97,  40,  55,  82,  85,  251, 147, 92,  156,
    228, 35,  73,  158, 178, 175, 0,   115, 107, 127, 146, 15,  38,  121, 103, 85,  13,  238, 245, 186, 134, 248, 196,
    90,  107, 39,  38,  249, 104, 146, 107, 146, 156, 101, 135, 1,   230, 194, 35,  73,  110, 72,  178, 163, 170, 6,
    251, 87,  29,  53,  228, 39,  216, 90,  171, 36,  231, 38,  185, 36,  201, 214, 201, 255, 127, 153, 221, 6,   88,
    21,  135, 147, 60,  144, 100, 103, 86,  190, 68,  229, 161, 170, 106, 67,  191, 233, 26,  211, 19,  110, 173, 173,
    75,  114, 122, 146, 211, 146, 156, 146, 228, 120, 123, 207, 148, 93,  148, 228, 227, 157, 92,  235, 245, 241, 217,
    219, 76,  223, 145, 36,  135, 178, 242, 118, 239, 190, 170, 90,  26,  219, 0,   22,  199, 116, 179, 147, 7,   252,
    196, 228, 127, 48,  139, 31,  222, 22,  59,  10,  235, 158, 170, 186, 221, 83,  131, 233, 90,  48,  2,   0,   16,
    86,  0,   16,  86,  0,   16,  86,  0,   64,  88,  1,   64,  88,  1,   64,  88,  1,   0,   97,  5,   0,   97,  5,
    0,   97,  5,   0,   97,  5,   0,   132, 21,  0,   132, 21,  0,   132, 21,  0,   16,  86,  0,   16,  86,  0,   16,
    86,  0,   16,  86,  0,   64,  88,  1,   64,  88,  1,   64,  88,  1,   0,   97,  5,   0,   97,  5,   0,   97,  5,
    0,   97,  5,   0,   132, 21,  0,   132, 21,  0,   132, 21,  0,   16,  86,  0,   16,  86,  0,   16,  86,  0,   64,
    88,  1,   64,  88,  1,   64,  88,  1,   64,  88,  1,   0,   97,  5,   0,   97,  5,   0,   97,  5,   0,   132, 21,
    0,   132, 21,  0,   132, 21,  0,   198, 164, 140, 128, 33,  107, 173, 45,  36,  217, 156, 100, 107, 146, 243, 146,
    156, 149, 228, 180, 36,  175, 72,  178, 206, 132, 102, 98,  41,  201, 161, 36,  7,   146, 60,  154, 100, 111, 146,
    157, 73,  30,  170, 170, 102, 60,  8,   43,  244, 25,  212, 77,  73,  174, 74,  242, 11,  73,  54,  154, 200, 92,
    248, 102, 146, 91,  146, 220, 84,  85,  7,   140, 3,   97,  133, 62,  130, 122, 106, 146, 107, 147, 108, 119, 34,
    157, 91,  199, 146, 124, 46,  201, 39,  170, 234, 160, 113, 32,  172, 48,  159, 65,  93,  72,  114, 117, 146, 235,
    146, 156, 100, 34,  93,  248, 78,  146, 223, 74,  114, 163, 183, 136, 17,  86,  152, 175, 168, 110, 72,  114, 107,
    146, 119, 153, 70,  151, 254, 42,  201, 246, 170, 58,  100, 20,  8,   43,  172, 125, 84,  79,  79,  242, 149, 36,
    111, 50,  141, 174, 125, 61,  201, 59,  171, 106, 191, 81,  32,  172, 176, 182, 81,  221, 157, 100, 147, 105, 12,
    194, 55,  146, 108, 17,  87,  132, 21,  214, 38,  170, 27,  146, 236, 113, 82,  29,  156, 71,  146, 92,  88,  85,
    207, 25,  5,   189, 242, 1,   17,  244, 24,  213, 133, 172, 252, 155, 170, 168, 14,  207, 143, 37,  217, 209, 90,
    243, 67,  63,  194, 10,  171, 232, 234, 248, 69,  165, 33,  123, 119, 146, 43,  141, 129, 94,  249, 169, 144, 222,
    78,  171, 167, 38,  249, 183, 248, 147, 154, 161, 251, 118, 146, 31,  169, 170, 167, 141, 2,   39,  86,  152, 173,
    107, 69,  117, 20,  126, 32,  201, 39,  140, 1,   39,  86,  152, 237, 105, 117, 83,  146, 39,  226, 19,  149, 198,
    226, 72,  146, 51,  170, 234, 63,  140, 2,   39,  86,  152, 141, 171, 68,  117, 84,  142, 143, 127, 107, 197, 137,
    21,  102, 118, 90,  93,  200, 202, 223, 57,  250, 64,  253, 113, 121, 60,  43,  255, 214, 234, 35,  15,  113, 98,
    133, 41,  219, 44,  170, 163, 116, 102, 146, 31,  53,  6,   132, 21,  166, 111, 171, 17,  120, 246, 32,  172, 48,
    61,  231, 25,  193, 104, 253, 148, 17,  32,  172, 48,  125, 103, 25,  129, 103, 15,  194, 10,  211, 115, 154, 17,
    120, 246, 32,  172, 48,  61,  175, 48,  130, 209, 58,  197, 8,   232, 201, 226, 180, 255, 131, 173, 181, 139, 146,
    252, 170, 209, 50,  101, 254, 126, 117, 188, 78,  108, 173, 221, 110, 12,  76,  217, 31,  86,  213, 158, 46,  194,
    154, 149, 183, 109, 222, 235, 153, 1,   83,  228, 53,  133, 105, 251, 194, 172, 254, 195, 222, 10,  6,   0,   97,
    5,   0,   97,  5,   0,   97,  5,   0,   132, 21,  0,   132, 21,  0,   132, 21,  0,   16,  86,  0,   16,  86,  0,
    16,  86,  0,   16,  86,  0,   64,  88,  1,   64,  88,  1,   64,  88,  1,   0,   97,  5,   0,   97,  5,   0,   97,
    5,   0,   97,  5,   0,   132, 21,  0,   132, 21,  0,   132, 21,  0,   16,  86,  0,   16,  86,  0,   16,  86,  0,
    16,  86,  0,   64,  88,  1,   64,  88,  1,   64,  88,  1,   0,   97,  5,   0,   97,  5,   0,   97,  5,   0,   132,
    21,  0,   132, 21,  0,   132, 21,  0,   132, 21,  0,   16,  86,  0,   16,  86,  0,   16,  86,  0,   64,  88,  1,
    64,  88,  1,   64,  88,  1,   96,  84,  202, 8,   232, 65,  107, 109, 217, 190, 142, 214, 82,  85,  45,  26,  3,
    78,  172, 48,  93,  47,  24,  193, 104, 61,  111, 4,   8,   43,  76,  223, 65,  35,  240, 236, 65,  88,  97,  122,
    30,  51,  2,   207, 30,  132, 21,  166, 231, 65,  35,  240, 236, 65,  88,  97,  122, 238, 49,  130, 209, 218, 109,
    4,   244, 196, 111, 89,  210, 133, 214, 218, 250, 36,  207, 36,  89,  111, 26,  163, 242, 124, 146, 87,  87,  213,
    119, 141, 2,   39,  86,  152, 230, 79,  128, 85,  47,  38,  185, 211, 36,  70,  231, 14,  81,  69,  88,  97,  118,
    110, 52,  130, 209, 185, 201, 8,   16,  86,  152, 157, 123, 147, 236, 49,  134, 209, 216, 93,  85,  247, 25,  3,
    194, 10,  51,  82,  85,  45,  201, 111, 155, 196, 104, 120, 214, 8,   43,  172, 66,  92,  119, 39,  185, 213, 36,
    6,   239, 207, 170, 202, 187, 19,  244, 249, 58,  101, 4,   244, 166, 181, 246, 202, 36,  15,  39,  217, 104, 26,
    131, 244, 141, 36,  231, 84,  213, 115, 70,  129, 19,  43,  172, 206, 169, 245, 217, 36,  151, 38,  121, 201, 52,
    6,   231, 112, 146, 247, 137, 42,  194, 10,  171, 31,  215, 251, 147, 92,  158, 100, 217, 52,  6,   99,  41,  201,
    182, 170, 122, 192, 40,  16,  86,  88,  155, 184, 222, 145, 100, 91,  146, 99,  166, 209, 189, 163, 73,  46,  171,
    170, 47,  27,  5,   221, 191, 54,  25,  1,   189, 107, 173, 109, 77,  242, 197, 36,  175, 50,  141, 46,  61,  147,
    149, 183, 127, 125, 116, 33,  78,  172, 48,  39,  39,  215, 93,  73,  54,  39,  217, 101, 26,  221, 185, 43,  201,
    102, 81,  69,  88,  97,  254, 226, 186, 63,  201, 197, 73,  62,  146, 228, 41,  19,  153, 123, 7,   146, 124, 40,
    201, 207, 86,  213, 183, 140, 131, 65,  189, 30,  25,  1,   67,  211, 90,  59,  49,  201, 71,  147, 92,  147, 228,
    44,  19,  153, 43,  143, 36,  185, 33,  201, 142, 170, 242, 91,  221, 8,   43,  116, 22,  216, 74,  114, 110, 146,
    75,  146, 108, 157, 252, 255, 151, 153, 204, 170, 58,  156, 228, 129, 36,  59,  179, 242, 37,  10,  15,  77,  62,
    65,  11,  132, 21,  6,   16,  218, 117, 73,  78,  79,  114, 90,  146, 83,  146, 28,  111, 42,  51,  113, 36,  201,
    161, 36,  251, 147, 236, 171, 170, 37,  35,  1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   128, 249, 243, 223, 250, 200, 86,  107,
    151, 70,  129, 21,  0,   0,   0,   0,   73,  69,  78,  68,  174, 66,  96,  130, 0,   0};

const char* Images::server_png = (const char*)resource_Images_server_png;
const int Images::server_pngSize = 4317;

// JUCER_RESOURCE: settings_png, 243, "../../settings.png"
static const unsigned char resource_Images_settings_png[] = {
    137, 80,  78,  71,  13,  10,  26,  10,  0,   0,   0,   13,  73,  72,  68,  82,  0,   0,   0,   24,  0,   0,   0,
    24,  8,   6,   0,   0,   0,   224, 119, 61,  248, 0,   0,   0,   6,   98,  75,  71,  68,  0,   255, 0,   255, 0,
    255, 160, 189, 167, 147, 0,   0,   0,   9,   112, 72,  89,  115, 0,   0,   13,  215, 0,   0,   13,  215, 1,   66,
    40,  155, 120, 0,   0,   0,   7,   116, 73,  77,  69,  7,   228, 9,   17,  10,  27,  13,  126, 164, 147, 78,  0,
    0,   0,   128, 73,  68,  65,  84,  72,  199, 237, 150, 225, 10,  128, 32,  12,  132, 111, 209, 99,  213, 211, 207,
    247, 186, 254, 40,  132, 101, 115, 133, 146, 209, 7,   251, 33,  167, 142, 221, 134, 40,  36,  209, 146, 9,   141,
    201, 19,  104, 140, 18,  110, 93,  50,  139, 210, 66,  10,  23,  184, 245, 238, 22,  125, 51,  129, 70,  111, 153,
    121, 77,  163, 225, 125, 42,  240, 78,  145, 197, 225, 252, 156, 109, 8,   173, 43,  168, 233, 7,   0,   172, 119,
    43,  176, 88,  12,  253, 232, 0,   73,  101, 25,  37,  137, 93,  36,  80,  27,  175, 155, 162, 51,  93,  47,  172,
    11,  67,  84,  240, 191, 166, 207, 240, 62,  21,  110, 93,  134, 255, 85,  108, 24,  12,  130, 54,  197, 92,  203,
    81,  0,   0,   0,   0,   73,  69,  78,  68,  174, 66,  96,  130, 0,   0};

const char* Images::settings_png = (const char*)resource_Images_settings_png;
const int Images::settings_pngSize = 243;

//[EndFile] You can add extra defines here...
//[/EndFile]
