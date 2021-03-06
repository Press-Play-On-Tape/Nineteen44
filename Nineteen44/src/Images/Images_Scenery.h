#pragma once

#ifndef DEBUG
const uint8_t PROGMEM ground_lower[] = {
76, 11,
0x00, 0xc4, 0x30, 0xca, 0xa4, 0xd5, 0xe9, 0x68, 0xf4, 0xea, 0xf2, 0xea, 0xf2, 0xaa, 0xf4, 0xe9, 0xe9, 0xf4, 0xe8, 0x74, 0xea, 0xf2, 0x9a, 0x64, 0x98, 0x01, 0x46, 0x40, 0x80, 0x00, 0x84, 0xd2, 0xc2, 0x58, 0xc8, 0x98, 0xa0, 0x92, 0x8a, 0xda, 0xc8, 0x52, 0xc4, 0x90, 0x20, 0x50, 0xb0, 0x00, 0x00, 0x00, 0x60, 0x10, 0x80, 0x40, 0xa0, 0x20, 0xa0, 0x40, 0x80, 0x40, 0x90, 0x90, 0x40, 0xa0, 0x20, 0xa0, 0x20, 0xa0, 0x40, 0x80, 0x90, 0x50, 0x40, 0x80, 0x20, 0x00, 
0x04, 0x06, 0x03, 0x04, 0x01, 0x07, 0x07, 0x07, 0x07, 0x06, 0x05, 0x07, 0x07, 0x07, 0x03, 0x07, 0x06, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x06, 0x07, 0x03, 0x04, 0x06, 0x06, 0x07, 0x07, 0x07, 0x05, 0x06, 0x07, 0x07, 0x07, 0x02, 0x07, 0x07, 0x05, 0x06, 0x07, 0x05, 0x00, 0x02, 0x00, 0x00, 0x04, 0x04, 0x02, 0x05, 0x06, 0x07, 0x07, 0x06, 0x07, 0x06, 0x07, 0x06, 0x06, 0x07, 0x02, 0x07, 0x06, 0x07, 0x06, 0x07, 0x06, 0x06, 0x05, 0x02, 0x04, 0x03, 0x04, 

0x00, 0x20, 0x80, 0x40, 0x50, 0x90, 0x80, 0x48, 0xa0, 0x20, 0xa8, 0x28, 0xa0, 0x40, 0x90, 0x90, 0x40, 0x90, 0x40, 0xa0, 0x28, 0xa8, 0x40, 0xf2, 0x94, 0x00, 0x40, 0x40, 0x80, 0x00, 0x84, 0xd2, 0xc2, 0xd8, 0xc8, 0x98, 0xa0, 0x92, 0x8a, 0xda, 0xc8, 0xd2, 0xc4, 0x90, 0x20, 0xf2, 0x00, 0x50, 0x50, 0x50, 0x50, 0x00, 0xf2, 0x40, 0xa8, 0x28, 0xa0, 0x40, 0x90, 0x40, 0x90, 0x90, 0x40, 0xa0, 0x24, 0xa4, 0x24, 0xa4, 0x48, 0x80, 0x90, 0x50, 0x40, 0xa0, 0x00, 0x00, 
0x04, 0x03, 0x04, 0x02, 0x05, 0x06, 0x06, 0x07, 0x06, 0x07, 0x06, 0x07, 0x06, 0x07, 0x06, 0x06, 0x07, 0x06, 0x07, 0x06, 0x07, 0x07, 0x06, 0x07, 0x06, 0x07, 0x07, 0x04, 0x06, 0x06, 0x07, 0x05, 0x06, 0x05, 0x07, 0x07, 0x07, 0x07, 0x06, 0x07, 0x07, 0x07, 0x07, 0x07, 0x05, 0x07, 0x00, 0x05, 0x05, 0x05, 0x05, 0x00, 0x07, 0x06, 0x07, 0x07, 0x06, 0x07, 0x06, 0x07, 0x06, 0x06, 0x07, 0x06, 0x07, 0x06, 0x07, 0x06, 0x07, 0x06, 0x06, 0x05, 0x02, 0x04, 0x03, 0x04, 
};
#else
const uint8_t PROGMEM ground_lower[] = {
1, 1, 0x00, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM ground_upper[] = {
76, 11,
0x01, 0x0e, 0x29, 0x12, 0x55, 0x4b, 0x0b, 0x17, 0x2b, 0x27, 0x2b, 0x27, 0x2a, 0x17, 0x4b, 0x4b, 0x17, 0x0b, 0x17, 0x2b, 0x27, 0x2f, 0x13, 0x0d, 0x42, 0x31, 0x01, 0x00, 0x00, 0x6a, 0x50, 0x25, 0x4f, 0x1b, 0x55, 0x9f, 0xdf, 0x8a, 0x4f, 0x2f, 0xcf, 0x9b, 0xd5, 0x1f, 0x5f, 0x0f, 0x03, 0x0b, 0x11, 0x16, 0x07, 0xcb, 0x37, 0xcf, 0x7f, 0xbf, 0x77, 0xbf, 0x7f, 0xbb, 0xbf, 0x7e, 0xaf, 0x7f, 0xbf, 0x7d, 0xbb, 0x7f, 0xb7, 0xbf, 0x5f, 0x2c, 0x99, 0x66, 0x1b, 0x01, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x00, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x03, 0x04, 0x00, 0x01, 0x02, 0x02, 0x02, 0x01, 0x00, 0x01, 0x04, 0x04, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x00, 0x04, 0x05, 0x01, 0x00, 0x00, 0x00, 0x00, 

0x01, 0x06, 0x29, 0x12, 0x55, 0x4b, 0x0b, 0x97, 0x2b, 0x27, 0x2b, 0x27, 0x2b, 0x17, 0x4b, 0x4b, 0x17, 0x4b, 0x17, 0x2b, 0xa7, 0xaf, 0x13, 0x7f, 0x00, 0x55, 0x55, 0x55, 0x55, 0x00, 0x7f, 0x25, 0x4f, 0x1f, 0x5f, 0x9f, 0xdf, 0x8b, 0x4f, 0x2f, 0xcf, 0x9f, 0xdd, 0x1b, 0x5d, 0x0f, 0x03, 0x0b, 0x11, 0x17, 0x07, 0x4b, 0x7f, 0x13, 0xaf, 0xa7, 0x2b, 0x17, 0x4b, 0x17, 0x4b, 0x4b, 0x17, 0x2b, 0xa7, 0xab, 0x27, 0x2b, 0x97, 0x0b, 0x4b, 0x55, 0x12, 0x29, 0x06, 0x01, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x02, 0x00, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
#else
const uint8_t PROGMEM ground_upper[] = {
1, 1, 0x00, 0X00
};
#endif

const uint8_t PROGMEM sail_boat_01[] = {
12, 9,
0x40, 0xa0, 0xa0, 0xa0, 0x10, 0x00, 0x78, 0x3f, 0x3e, 0x38, 0x80, 0x60, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 
};

const uint8_t PROGMEM sail_boat_02[] = {
13, 11,
0x00, 0x80, 0x80, 0x38, 0x7c, 0xe6, 0x03, 0xe0, 0xfe, 0xf8, 0xe0, 0x00, 0x80, 
0x01, 0x02, 0x02, 0x04, 0x04, 0x04, 0x04, 0x05, 0x04, 0x04, 0x04, 0x02, 0x01, 
};

const uint8_t PROGMEM wave_01[] = {
9, 16,
0x00, 0x00, 0x00, 0x11, 0x04, 0x00, 0x00, 0x40, 0x00, 
0x88, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x01, 
};

const uint8_t PROGMEM wave_02[] = {
9, 16,
0x20, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x04, 
0x02, 0x00, 0x00, 0x00, 0x88, 0x20, 0x00, 0x00, 0x00, 
};

#ifndef DEBUG
const uint8_t PROGMEM island_01[] = {
34, 22,
0x80, 0x40, 0x46, 0x01, 0x98, 0x64, 0x9a, 0xf2, 0xea, 0x74, 0xa8, 0x34, 0xa9, 0x69, 0xf4, 0xaa, 0xf2, 0xaa, 0xf2, 0xea, 0x6a, 0xb2, 0x6a, 0xf2, 0xea, 0xf4, 0xa8, 0xe9, 0xd5, 0xa4, 0xca, 0x3a, 0xc4, 0x00, 
0x70, 0x86, 0x39, 0x45, 0xde, 0x3f, 0xfe, 0x57, 0xfb, 0xf3, 0xbb, 0xd7, 0x9f, 0xd3, 0xbf, 0xff, 0xfb, 0xfb, 0xbd, 0xfa, 0xfd, 0xde, 0xec, 0xc8, 0xeb, 0xdd, 0xf9, 0xdb, 0x7f, 0xff, 0x28, 0x47, 0x38, 0x80, 
0x00, 0x08, 0x17, 0x14, 0x09, 0x2a, 0x25, 0x05, 0x0a, 0x15, 0x13, 0x17, 0x13, 0x17, 0x0d, 0x0b, 0x02, 0x0b, 0x1d, 0x0f, 0x25, 0x25, 0x0b, 0x05, 0x0b, 0x15, 0x13, 0x16, 0x09, 0x06, 0x21, 0x18, 0x00, 0x00, 
};
#else
const uint8_t PROGMEM island_01[] = {
1, 1, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM island_02[] = {
30, 16,
0xc0, 0x24, 0x3a, 0xca, 0xa4, 0xd5, 0xe9, 0x68, 0xf4, 0xea, 0xf2, 0xea, 0xf2, 0xaa, 0xf4, 0xe9, 0xe9, 0xf4, 0xe8, 0x74, 0xea, 0xf2, 0x9a, 0x64, 0x98, 0x01, 0x46, 0x40, 0x80, 0x00, 
0x00, 0x39, 0x47, 0x28, 0x17, 0x15, 0x6b, 0x97, 0xaf, 0x9e, 0x6f, 0x17, 0x97, 0x2b, 0x2b, 0x2b, 0x96, 0x4b, 0x0b, 0x37, 0x4f, 0x5d, 0x2f, 0x2f, 0x56, 0x45, 0x39, 0x06, 0x30, 0x00, 
};
#else
const uint8_t PROGMEM island_02[] = {
1, 1, 0x00
};
#endif

#ifdef USE_ISLAND_3

    #ifndef DEBUG
    const uint8_t PROGMEM island_03[] = {
    36, 22,
    0x08, 0xc4, 0x3a, 0xca, 0xa4, 0xd5, 0xe9, 0x68, 0xd4, 0xd4, 0xd4, 0xe9, 0xe8, 0xf6, 0x79, 0xf5, 0xe9, 0xd6, 0xa8, 0xe9, 0x14, 0xe2, 0x1c, 0x01, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x80, 0x38, 0x47, 0x28, 0x97, 0x15, 0x4b, 0x97, 0x97, 0x2f, 0x55, 0x4f, 0x57, 0x4f, 0x57, 0x2f, 0x16, 0x97, 0xab, 0x25, 0x53, 0x5c, 0x63, 0x00, 0x10, 0x00, 0x80, 0x82, 0x60, 0x98, 0xe8, 0xea, 0xd2, 0x24, 0xc0, 0x00, 
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x02, 0x00, 0x00, 0x00, 0x1c, 0x20, 0x0c, 0x12, 0x12, 0x15, 0x29, 0x24, 0x32, 0x09, 0x2b, 0x09, 0x13, 0x15, 0x08, 0x07, 0x00, 
    };
    #else
    const uint8_t PROGMEM island_03[] = {
    1, 1, 0x00
    };
    #endif

#endif

#ifndef DEBUG
const uint8_t PROGMEM cloud[] = {
13, 36,
0x00, 0x00, 0x80, 0xf8, 0x5c, 0xae, 0xdc, 0xb8, 0x70, 0xc0, 0x00, 0x00, 0x00, 
0x00, 0x1e, 0x7f, 0xaa, 0xd7, 0xab, 0x57, 0xaf, 0x5f, 0xfe, 0xf8, 0xe0, 0x00, 
0x00, 0x80, 0x6f, 0xba, 0x55, 0xab, 0x57, 0xae, 0xdf, 0xf7, 0xe3, 0x40, 0x00, 
0x00, 0x07, 0xfd, 0xea, 0x57, 0xef, 0x77, 0xff, 0x7f, 0x07, 0x03, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x03, 0x05, 0x02, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
#else
const uint8_t PROGMEM cloud[] = {
1, 1, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM cloud_Mask[] = {
0x00, 0x80, 0xf8, 0xfc, 0x5e, 0xaf, 0xde, 0xbc, 0x78, 0xf0, 0xc0, 0x00, 0x00, 
0x1e, 0x7f, 0xff, 0xaa, 0xd7, 0xab, 0x57, 0xaf, 0x5f, 0xff, 0xfe, 0xf8, 0xe0, 
0x80, 0xef, 0x7f, 0xba, 0x55, 0xab, 0x57, 0xae, 0xdf, 0xff, 0xf7, 0xe3, 0x40, 
0x07, 0xff, 0xfd, 0xea, 0x57, 0xef, 0x77, 0xff, 0xff, 0x7f, 0x07, 0x03, 0x00, 
0x00, 0x00, 0x03, 0x07, 0x0d, 0x06, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 
};
#else
const uint8_t PROGMEM cloud_Mask[] = {
0x00
};
#endif
