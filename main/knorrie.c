#include "knorrie.h"

const uint8_t knorrie[4736] = {
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe7,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe7,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe7,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe7,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe7,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0x0f,0xef,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x8f,0xc7,0xcf,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0xf9,0xdf,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0xfc,0x9f,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0x7f,0xfe,0x3f,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0x7f,0xfe,0x3f,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0x7f,0xf8,0xbf,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0x7f,0xe1,0xdf,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x87,0xdf,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1c,0x1f,0xef,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xef,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe7,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe7,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe7,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf7,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0x3f,0xe7,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc3,0x0f,0xef,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x8f,0xe7,0xcf,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x9f,0xf3,0xcf,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0xfd,0xdf,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0xfe,0xbf,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0xfe,0x3f,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xbf,0xfc,0x7f,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xbf,0xf1,0x7f,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdf,0xc3,0xbf,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0x0f,0xbf,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0x7f,0xbf,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xbf,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xbf,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xbf,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xbf,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xbf,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xbf,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0x7f,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf9,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf9,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x03,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0x00,0x00,0x7f,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x83,0xff,0xfe,0x07,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0x1f,0xff,0xff,0xe1,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xf8,0xff,0xff,0xff,0xfe,0x3f,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xe3,0xff,0xff,0xff,0xff,0x8f,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0x8f,0xff,0xff,0xff,0xff,0xe3,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xfe,0x3f,0xff,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xf8,0xff,0xff,0xff,0xff,0xff,0xfe,0x3f,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xf1,0xff,0xff,0xff,0xff,0xff,0xff,0x9f,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xe7,0xff,0xff,0xff,0xff,0xff,0xff,0xcf,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0x8f,0xff,0xff,0xff,0xff,0xff,0xff,0xf3,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0x1f,0xff,0xff,0xff,0xff,0xff,0xff,0xf9,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xfe,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,
    0xff,0x87,0xff,0xff,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0x7f,0xff,0xff,
    0xff,0x33,0xff,0xff,0xf9,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0xff,0xff,
    0xff,0x7c,0xff,0xff,0xf3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x9f,0xff,0xff,
    0xff,0x7f,0x3f,0xff,0xe7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xcf,0xff,0xff,
    0xfe,0x7f,0x8f,0xff,0xc7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe7,0xff,0xff,
    0xfe,0x7f,0xe7,0xff,0x8f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf3,0xff,0xff,
    0xfe,0xff,0xf9,0xff,0x9f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf9,0xff,0xff,
    0xfe,0xff,0xfc,0xff,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xff,0xff,
    0xfe,0xff,0xff,0x7e,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0x7f,0xff,
    0xfe,0xff,0xff,0x9e,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0xff,
    0xfc,0xff,0xff,0xec,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x9f,0xff,
    0xfc,0xff,0xff,0xf1,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdf,0xff,
    0xfd,0xff,0xff,0xf9,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xcf,0xff,
    0xf9,0xff,0xff,0xf3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,0xff,
    0xf9,0xff,0xff,0xf3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe7,0xff,
    0xf9,0xff,0xff,0xf7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf3,0xff,
    0xfb,0xff,0xff,0xe7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf3,0xff,
    0xf3,0xff,0xff,0xe7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0xff,
    0xf3,0xff,0xff,0xcf,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf9,0xff,
    0xf3,0xff,0xff,0xcf,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xff,
    0xf7,0xff,0xff,0xcf,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xff,
    0xf7,0xff,0xff,0xdf,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xff,
    0xf3,0xff,0xf0,0x1f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,
    0xf8,0x00,0x00,0x1f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0x7f,
    0xf8,0x3e,0xff,0x9f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,
    0xf3,0x1f,0xff,0xbf,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,
    0xf7,0xc7,0xff,0xbf,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,
    0xf7,0xf8,0xff,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xbf,
    0xf7,0xfe,0x3f,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xbf,
    0xe7,0xff,0x8f,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x9f,
    0xef,0xff,0xf1,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdf,
    0xef,0xff,0xfd,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdf,
    0xef,0xff,0xfe,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xcf,
    0xef,0xff,0xfe,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xcf,
    0xef,0xff,0xfe,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xcf,
    0xcf,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,
    0xcf,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,
    0xcf,0xff,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe7,
    0xcf,0xff,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe7,
    0xcf,0xff,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf7,
    0xdf,0xff,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf7,
    0xdf,0xff,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf7,
    0xdf,0xff,0xf9,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf7,
    0xdf,0xff,0xf1,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf7,
    0xdf,0xff,0x83,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf7,
    0xdf,0xfc,0x3b,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf7,
    0xdf,0xe1,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf7,
    0xdf,0x0f,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf7,
    0xc0,0x7f,0xf3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf7,
    0xff,0xff,0xf3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf7,
    0xff,0xff,0xf3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf3,
    0xff,0xff,0xf3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf3,
    0xff,0xff,0xf3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf3,
    0xff,0xff,0xf3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf3,
    0xff,0xff,0xf3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf3,
    0xff,0xff,0xf3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf7,
    0xff,0xff,0xf3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf7,
    0xff,0xff,0xf3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf7,
    0xff,0xff,0xf3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe7,
    0xff,0xff,0xf3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe7,
    0xff,0xff,0xf3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,
    0xff,0xff,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xcf,
    0xff,0xff,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xcf,
    0xff,0xff,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdf,
    0xff,0xff,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdf,
    0xff,0xff,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdf,
    0xff,0xff,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x9f,
    0xff,0xff,0xf9,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x9f,
    0xff,0xff,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xbf,
    0xff,0xff,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xbf,
    0xff,0xff,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xbf,
    0xff,0xff,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,
    0xff,0xff,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,
    0xff,0xff,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,
    0xff,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0x7f,
    0xfe,0x01,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xff,
    0xfe,0xf8,0x3e,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xff,
    0xfc,0xff,0x82,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xff,
    0xfc,0xff,0xf0,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xff,
    0xfc,0xff,0xff,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0xff,
    0xfc,0xff,0xff,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf3,0xff,
    0xfe,0xff,0xff,0xbf,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf3,0xff,
    0xfe,0xff,0xff,0x9f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe7,0xff,
    0xfe,0xff,0xff,0xdf,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,0xff,
    0xfe,0xff,0xff,0xcf,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xcf,0xff,
    0xfe,0xff,0xff,0xef,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdf,0xff,
    0xfe,0xff,0xff,0xe7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x9f,0xff,
    0xfe,0xff,0xff,0xe7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xbf,0xff,
    0xfe,0xff,0xff,0x83,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0xff,
    0xfe,0xff,0xfe,0x7b,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0x7f,0xff,
    0xfe,0x7f,0xf9,0xf9,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0x7f,0xff,
    0xfe,0x7f,0xe3,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xff,0xff,
    0xff,0x7f,0x8f,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf9,0xff,0xff,
    0xff,0x7c,0x7f,0xfa,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0xff,0xff,
    0xff,0x00,0x00,0x06,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf3,0xff,0xff,
    0xff,0xd3,0xff,0x9f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe7,0xff,0xff,
    0xff,0xf7,0xff,0xff,0xbf,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe7,0xff,0xff,
    0xff,0xf7,0xff,0xff,0x9f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xcf,0xff,0xff,
    0xff,0xf7,0xff,0xff,0xdf,0xff,0xff,0xff,0xf0,0x00,0xff,0xff,0xff,0xdf,0xff,0xff,
    0xff,0xf7,0xff,0xff,0xcf,0xff,0xff,0xff,0x07,0xf8,0x0f,0xff,0xff,0x9f,0xff,0xff,
    0xff,0xf3,0xff,0xff,0xe7,0xff,0xff,0xf8,0x7f,0xff,0xe1,0xff,0xff,0x3f,0xff,0xff,
    0xff,0xf3,0xff,0xff,0xc7,0xff,0xff,0xc3,0xff,0xff,0xfc,0x3f,0xff,0x3f,0xff,0xff,
    0xff,0xf3,0xff,0xff,0xb3,0xff,0xff,0x1f,0xff,0xff,0xff,0x1f,0xfe,0x7f,0xff,0xff,
    0xff,0xfb,0xff,0xff,0x39,0xff,0xfc,0x7f,0xff,0xff,0xff,0xc7,0xfc,0xff,0xff,0xff,
    0xff,0xfb,0xff,0xfe,0x7c,0xff,0xf1,0xff,0xff,0xff,0xff,0xf1,0xfd,0xff,0xff,0xff,
    0xff,0xf9,0xff,0xfc,0xfe,0x7f,0xe7,0xff,0xff,0xff,0xff,0xfc,0xfb,0xff,0xff,0xff,
    0xff,0xf9,0xff,0xf9,0xff,0x3f,0xcf,0xff,0xff,0xff,0xff,0xfe,0x33,0xff,0xff,0xff,
    0xff,0xfd,0xff,0xf3,0xff,0x9f,0x3f,0xff,0xff,0xff,0xff,0xff,0x87,0xff,0xff,0xff,
    0xff,0xfc,0xff,0xcf,0xff,0xce,0x7f,0xff,0xff,0xff,0xff,0xff,0xcf,0xff,0xff,0xff,
    0xff,0xfc,0xff,0x9f,0xff,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xe7,0xff,0xff,0xff,
    0xff,0xfe,0xfe,0x7f,0xff,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xf3,0xff,0xff,0xff,
    0xff,0xff,0x78,0xff,0xff,0xf9,0xff,0xff,0xff,0xff,0xff,0xff,0xf9,0xff,0xff,0xff,
    0xff,0xff,0x83,0xff,0xff,0xf3,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,
    0xff,0xff,0xdf,0xff,0xff,0xf7,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xff,0x81,0xff,
    0xff,0xff,0xff,0xff,0xff,0xe7,0xfc,0x07,0xff,0xff,0xff,0xff,0xfe,0x7c,0x38,0x7f,
    0xff,0xff,0xff,0xff,0xff,0xef,0xf0,0x01,0xff,0xff,0xff,0xff,0xff,0x39,0xff,0x1f,
    0xff,0xff,0xff,0xff,0xff,0xcf,0xe3,0xfc,0xff,0xff,0xff,0xff,0xff,0xb7,0xff,0xe7,
    0xff,0xff,0xff,0xff,0xff,0xcf,0xcc,0x0f,0x7f,0x00,0x07,0xff,0xff,0x8f,0xff,0xf3,
    0xff,0xff,0xff,0xff,0xff,0x9f,0x98,0xe7,0x38,0x03,0xc0,0xff,0xff,0x8f,0xff,0xfb,
    0xff,0xff,0xff,0xff,0xff,0x9f,0x93,0xfb,0xb0,0xff,0xfc,0x1f,0xff,0xdf,0xff,0xf9,
    0xff,0xff,0xff,0xff,0xff,0xbf,0x37,0xfb,0x83,0x00,0xff,0xc7,0xff,0xff,0xff,0xfd,
    0xff,0xff,0xff,0xff,0xff,0x3f,0x67,0xf9,0xc6,0x00,0x7f,0xf1,0xff,0xff,0xff,0xfd,
    0xff,0xff,0xff,0xff,0xff,0x7e,0x67,0xfd,0xcc,0x00,0x3f,0xfc,0xff,0xff,0xff,0xfd,
    0xff,0xff,0xff,0xff,0xff,0x7e,0x77,0xf9,0xcc,0x00,0x3f,0xff,0x7f,0xff,0xff,0xfd,
    0xff,0xff,0xff,0xff,0xff,0x7e,0x73,0xf9,0xc8,0x00,0x1f,0xff,0xbf,0xff,0xff,0xf9,
    0xff,0xff,0xff,0xff,0xfe,0x7e,0x79,0xf3,0xcc,0x00,0x1f,0xff,0xdf,0xff,0xff,0xf9,
    0xff,0xff,0xff,0xff,0xfe,0x7e,0x78,0x07,0xc4,0x00,0x1f,0xff,0xcf,0xff,0xff,0xf3,
    0xff,0xff,0xff,0xff,0xfe,0x7e,0x70,0x0f,0xc6,0x00,0x1f,0xff,0xf7,0xff,0xff,0xf3,
    0xff,0xff,0xff,0xff,0xfe,0x7e,0x67,0x9f,0xd3,0x00,0x1f,0xff,0xfb,0xff,0xff,0xe7,
    0xff,0xff,0xff,0xff,0xfe,0x7e,0x6f,0xcf,0x99,0x80,0x3f,0xff,0xf9,0xff,0xff,0x8f,
    0xff,0xff,0xff,0xff,0xfe,0x7e,0x4f,0xe7,0x9c,0x40,0x7f,0xff,0xfd,0xfc,0x00,0x1f,
    0xff,0xff,0xff,0xff,0xfe,0xff,0x4f,0xf7,0x1e,0x3d,0xff,0xff,0xfc,0xfe,0x00,0xff,
    0xff,0xff,0xff,0xff,0xfc,0xff,0x4f,0xf7,0x3f,0x8f,0xff,0xff,0xfc,0xfe,0x7f,0xff,
    0xff,0xff,0xff,0xff,0xfc,0xff,0x27,0xfb,0x38,0x07,0xff,0xff,0xfc,0xff,0x3f,0xff,
    0xff,0xff,0xff,0xff,0xfc,0xff,0x27,0xf3,0x00,0x00,0xff,0xff,0xf9,0xff,0x3f,0xff,
    0xff,0xfd,0xff,0xff,0xfc,0xff,0xb3,0xe3,0x04,0xe0,0x3f,0xff,0xf9,0xff,0xbf,0xff,
    0xff,0xf8,0x7f,0xff,0xfc,0xff,0x98,0x06,0x38,0x3f,0x07,0xff,0xe3,0xff,0x9f,0xff,
    0xff,0xf0,0x7f,0xff,0xfc,0xff,0xdc,0x0e,0x60,0x0f,0xc0,0xff,0x87,0xff,0xdf,0xff,
    0xff,0xf2,0x3f,0xff,0xfc,0xff,0xcf,0xfc,0x40,0x07,0xf8,0x00,0x0f,0xff,0xdf,0xff,
    0xff,0xc3,0x7f,0xff,0xfc,0xff,0xe7,0xf8,0xc0,0x03,0xfe,0x00,0xff,0xff,0xdf,0xff,
    0xff,0x93,0x7f,0xff,0xfc,0xff,0xf0,0xc2,0x40,0x03,0xff,0xcf,0xff,0xff,0xdf,0xff,
    0xff,0x32,0xff,0xff,0xfc,0xff,0xf8,0x07,0x40,0x03,0xff,0xf3,0xff,0xff,0xcf,0xff,
    0xff,0x38,0xff,0xff,0xfe,0xff,0xff,0x5f,0x20,0x01,0xff,0xfb,0xff,0xff,0xcf,0xff,
    0xff,0x38,0x7f,0xff,0xfe,0x7f,0xff,0xff,0x90,0x03,0xff,0xfd,0xff,0xff,0xdf,0xff,
    0xff,0x80,0x7f,0xff,0xfe,0x7f,0xff,0xff,0xcc,0x03,0xff,0xfe,0xff,0xff,0xdf,0xff,
    0xff,0xf8,0x1f,0xff,0xfe,0x7f,0xff,0xff,0xe6,0x0f,0xff,0xfe,0x7f,0xff,0xdf,0xff,
    0xff,0xd2,0x4f,0xff,0xfe,0x7f,0xff,0xff,0xf3,0xff,0xff,0xff,0x3f,0xff,0xdf,0xff,
    0xff,0xc8,0x7f,0xff,0xff,0x7f,0xff,0xff,0xf8,0xff,0xff,0xff,0xbf,0xff,0x9f,0xff,
    0xff,0xe8,0x7f,0xff,0xff,0x3f,0xff,0xff,0xfe,0x3f,0xff,0xff,0xbf,0xff,0xbf,0xff,
    0xff,0xec,0xff,0xff,0xff,0xbf,0xff,0xff,0xff,0x0f,0xff,0xff,0x9f,0xff,0x3f,0xff,
    0xff,0xec,0x7f,0xff,0xff,0x9f,0xff,0xff,0xff,0xc1,0xff,0xff,0x9f,0xff,0x3f,0xff,
    0xff,0xe0,0x7f,0xff,0xff,0xdf,0xff,0xff,0xff,0xf0,0x7f,0xff,0x3f,0xfe,0x7f,0xff,
    0xff,0xf4,0xff,0xff,0xff,0xcf,0xff,0xff,0xff,0xfe,0x07,0xfc,0x7f,0xfe,0x7f,0xff,
    0xff,0xf6,0x3f,0xff,0xff,0xef,0xff,0xff,0xff,0xff,0xe0,0x00,0xff,0xfc,0xff,0xff,
    0xff,0xf6,0x3f,0xff,0xff,0xf7,0xff,0xff,0xff,0xff,0xff,0x07,0xff,0xf8,0xff,0xff,
    0xff,0xf7,0x7f,0xff,0xff,0xf3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf1,0xff,0xff,
    0xff,0xf6,0x7f,0xff,0xff,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf3,0xff,0xff,
    0xff,0xf7,0xff,0xff,0xff,0xf9,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc7,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x8f,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xfe,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0x9f,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xcf,0xff,0xff,0xff,0xff,0xff,0xff,0xe7,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xe7,0xff,0xff,0xff,0xff,0xff,0xff,0xf3,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xf3,0xff,0xff,0xff,0xff,0xff,0xff,0xf9,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0x7f,0xff,0xff,0xff,0xff,0xff,0xfc,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x87,0xff,0xff,0xff,0xf1,0xff,0xfe,0x7f,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0xff,0xff,0xff,0xc1,0xff,0xfe,0x7f,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0x1f,0xff,0xff,0x0c,0xff,0xfe,0x7f,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0xff,0xc0,0x3c,0xff,0xfe,0x7f,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0x00,0x00,0xfe,0x7f,0xfe,0x7f,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc1,0xff,0xfe,0x7f,0xfc,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0xfc,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x8f,0xf9,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc3,0xe3,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf8,0x07,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
};
