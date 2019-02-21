#pragma once

#ifndef DEBUG
const uint8_t PROGMEM title[] = {
62, 32,
0x00, 0x50, 0x80, 0x5c, 0x92, 0x11, 0xf1, 0x01, 0x01, 0x01, 0xff, 0x00, 0xa0, 0x00, 0xf8, 0x04, 0x02, 0x01, 0xe1, 0x11, 0x11, 0x11, 0x11, 0xe1, 0x01, 0x02, 0x04, 0xf8, 0x00, 0x40, 0x00, 0xc0, 0x30, 0x08, 0x06, 0x01, 0xc1, 0xf1, 0x01, 0x01, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0xc0, 0x30, 0x08, 0x06, 0x01, 0xc1, 0xf1, 0x01, 0x01, 0x01, 0xff, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x55, 0xaa, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x2a, 0x40, 0x0f, 0x18, 0x30, 0x20, 0x21, 0x22, 0x22, 0x22, 0x22, 0xe3, 0x00, 0x00, 0x00, 0xff, 0x00, 0x7c, 0x43, 0x40, 0x40, 0x40, 0x44, 0x47, 0x44, 0xc7, 0x00, 0x00, 0x00, 0xc7, 0x44, 0x44, 0x7c, 0x01, 0x7c, 0x43, 0x40, 0x40, 0x40, 0x44, 0x47, 0x44, 0xc7, 0x00, 0x00, 0x00, 0xc7, 0x44, 0x44, 0x7c, 
0x80, 0x40, 0x00, 0x71, 0x48, 0x44, 0x43, 0x40, 0x40, 0x40, 0x43, 0x44, 0x78, 0x00, 0x8f, 0x11, 0x21, 0x41, 0x43, 0x42, 0x42, 0x42, 0x42, 0x43, 0x40, 0x20, 0x10, 0x0f, 0x00, 0x01, 0x02, 0x01, 0x42, 0xa1, 0x02, 0x79, 0x44, 0x43, 0x40, 0x40, 0x40, 0x43, 0x44, 0x78, 0x01, 0x02, 0x01, 0x02, 0x01, 0x42, 0xa1, 0x02, 0x79, 0x44, 0x43, 0x40, 0x40, 0x40, 0x43, 0x44, 0x78, 0x00, 
0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 
};
#else
const uint8_t PROGMEM title[] = {
1, 1, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM return_to_midway[] = {
54, 16,
0x20, 0x38, 0x0f, 0x05, 0x3d, 0x07, 0x20, 0x38, 0x2f, 0x25, 0x25, 0x11, 0x00, 0x21, 0x39, 0x3f, 0x01, 0x01, 0x03, 0x1c, 0x27, 0x20, 0x30, 0x1c, 0x0f, 0x20, 0x38, 0x0f, 0x05, 0x3d, 0x07, 0x20, 0x39, 0x07, 0x2c, 0x39, 0x27, 0x01, 0x00, 0x00, 0x00, 0x00, 0x21, 0x39, 0x3f, 0x01, 0x01, 0x03, 0x1c, 0x26, 0x01, 0x20, 0x19, 0x0e, 
0x00, 0x00, 0x00, 0x04, 0x0e, 0x04, 0x00, 0x20, 0x3c, 0x03, 0x3f, 0x10, 0x28, 0x3e, 0x3f, 0x01, 0x20, 0x38, 0x2f, 0x01, 0x20, 0x38, 0x2f, 0x21, 0x21, 0x1f, 0x0e, 0x00, 0x3d, 0x3f, 0x09, 0x04, 0x3f, 0x18, 0x24, 0x33, 0x0d, 0x2a, 0x3f, 0x20, 0x00, 0x21, 0x3f, 0x3d, 0x04, 0x03, 0x01, 0x00, 0x04, 0x0e, 0x04, 0x00, 0x00, 0x00, 
};
#else
const uint8_t PROGMEM return_to_midway[] = {
1, 1, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM splash_press_a[] = {
31, 8,
0xfc, 0x04, 0x24, 0x18, 0x00, 0x3c, 0x08, 0x04, 0x00, 0x18, 0x24, 0x34, 0x28, 0x00, 0x28, 0x34, 0x34, 0x00, 0x28, 0x34, 0x34, 0x00, 0x00, 0x00, 0x7e, 0x81, 0xbd, 0x95, 0xbd, 0x81, 0x7e, 
};
#else
const uint8_t PROGMEM splash_press_a[] = {
1, 1, 0x00
};
#endif

#ifndef DEBUG
const unsigned char PROGMEM FlyBy_P38[] = {
18, 24,
0x00, 0x20, 0xf0, 0xf0, 0x20, 0x20, 0x20, 0x60, 0x60, 0x60, 0xbc, 0x66, 0xbc, 0x60, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x20, 0x7f, 0x7f, 0x20, 0x20, 0x20, 0x32, 0x37, 0x35, 0xed, 0x37, 0xed, 0x35, 0x07, 0x07, 0x02, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
#else
const unsigned char PROGMEM FlyBy_P38[] = {
1, 1, 0x00
};
#endif

#ifndef DEBUG
const unsigned char PROGMEM FlyBy_P38_Mask[] = {
0x20, 0xf0, 0xf8, 0xf8, 0xf0, 0x70, 0x70, 0xf0, 0xf0, 0xfc, 0xfe, 0xff, 0xfe, 0xfc, 0xe0, 0x80, 0x00, 0x00, 
0x20, 0x7f, 0xff, 0xff, 0x7f, 0x70, 0x72, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x0f, 0x07, 0x02, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 
};
#else
const unsigned char PROGMEM FlyBy_P38_Mask[] = {
0x00
};
#endif

#ifndef DEBUG
const unsigned char PROGMEM FlyBy_Zero[] = {
17, 24,
0x00, 0x00, 0xe0, 0xc0, 0x00, 0x00, 0x80, 0x80, 0x80, 0xf0, 0xfc, 0xee, 0xfc, 0x80, 0x80, 0x00, 0x00, 
0x00, 0x01, 0x0f, 0x07, 0x01, 0x01, 0x03, 0x03, 0x03, 0x1f, 0x7e, 0xee, 0x7e, 0x03, 0x03, 0x01, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
#else
const unsigned char PROGMEM FlyBy_Zero[] = {
1, 1, 0x00
};
#endif

#ifndef DEBUG
const unsigned char PROGMEM FlyBy_Zero_Mask[] = {
0x00, 0xe0, 0xf0, 0xe0, 0xc0, 0x80, 0xc0, 0xc0, 0xf0, 0xfc, 0xfe, 0xff, 0xfe, 0xfc, 0xc0, 0x80, 0x00, 
0x01, 0x0f, 0x1f, 0x0f, 0x07, 0x03, 0x07, 0x07, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0x7f, 0x07, 0x03, 0x01, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
#else
const unsigned char PROGMEM FlyBy_Zero_Mask[] = {
0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM level_select[] = {
17, 8,
0x7e, 0x00, 0x30, 0x48, 0x68, 0x50, 0x00, 0x38, 0x40, 0x38, 0x00, 0x30, 0x48, 0x68, 0x50, 0x00, 0x7e, 
};
#else
const uint8_t PROGMEM level_select[] = {
1, 1, 0x00
};
#endif

const uint8_t PROGMEM level_numbers[] = {
6, 3,
0x07, 0x02, 0x02, 0x02, 0x03, 0x02, 
0x07, 0x01, 0x01, 0x02, 0x04, 0x03, 
0x03, 0x04, 0x04, 0x07, 0x04, 0x03, 
};

const uint8_t PROGMEM arrow_up[] = {
5, 8,
0x04, 0x06, 0x07, 0x06, 0x04, 
};

const uint8_t PROGMEM arrow_down[] = {
5, 8,
0x01, 0x03, 0x07, 0x03, 0x01, 
};

#ifndef DEBUG
const uint8_t PROGMEM splash_upper[] = {
128, 16,
0xff, 0x5f, 0xbf, 0xb7, 0x7f, 0xbb, 0x7d, 0xbf, 0x7f, 0xaf, 0x7f, 0xbf, 0xbb, 0x7f, 0xbf, 0x77, 0xbf, 0x7f, 0xcf, 0x37, 0xcb, 0x07, 0x17, 0x11, 0x0b, 0x03, 0x0f, 0x5f, 0x1f, 0xd5, 0x9b, 0xcf, 0x2f, 0x4f, 0x8b, 0xdf, 0x9f, 0x55, 0x1b, 0x4f, 0x25, 0x5b, 0x57, 0x5b, 0x57, 0x5b, 0x57, 0x4b, 0x2f, 0x13, 0xaf, 0xa7, 0x2b, 0x17, 0x0b, 0x17, 0x4b, 0x4b, 0x17, 0x2b, 0x27, 0x2b, 0x27, 0x2b, 0x17, 0x2b, 0x27, 0x2b, 0x27, 0x2b, 0x17, 0x4b, 0x4b, 0x17, 0x0b, 0x17, 0x2b, 0xa7, 0xaf, 0x13, 0x7f, 0x00, 0x55, 0x55, 0x55, 0x55, 0x00, 0x7f, 0x25, 0x4f, 0x1b, 0x55, 0x9f, 0xdf, 0x8b, 0x4f, 0x2f, 0xcf, 0x9b, 0xd5, 0x1f, 0x5f, 0x0f, 0x03, 0x0b, 0x11, 0x17, 0x07, 0xcb, 0x37, 0xcf, 0x7f, 0xbf, 0x77, 0xbf, 0x7f, 0xbb, 0xbf, 0x7f, 0xaf, 0x7f, 0xbf, 0x7d, 0xbb, 0x7f, 0xb7, 0xbf, 0x5f, 
0x05, 0x05, 0x04, 0x02, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x04, 0x04, 0x01, 0x00, 0x01, 0x02, 0x02, 0x02, 0x01, 0x00, 0x04, 0x03, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x00, 0x02, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x02, 0x00, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x03, 0x04, 0x00, 0x01, 0x02, 0x02, 0x02, 0x01, 0x00, 0x01, 0x04, 0x04, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x00, 0x04, 0x05, 
};
#else
const uint8_t PROGMEM splash_upper[] = {
1, 1, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM splash_lower[] = {
128, 16,
0xa0, 0x20, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x40, 0x80, 0x20, 0x20, 0x80, 0x00, 0x80, 0x40, 0x40, 0x40, 0x80, 0x00, 0x20, 0xc0, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x00, 0x40, 0x80, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x80, 0x40, 0x00, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0xc0, 0x20, 0x00, 0x80, 0x40, 0x40, 0x40, 0x80, 0x00, 0x80, 0x20, 0x20, 0x80, 0x40, 0x40, 0x40, 0x40, 0x40, 0x80, 0x40, 0x20, 0xa0, 0xa0, 
0xfa, 0xfd, 0xed, 0xfe, 0xdd, 0xbe, 0xfd, 0xfe, 0xf5, 0xfe, 0xfd, 0xdd, 0xfe, 0xfd, 0xee, 0xfd, 0xfe, 0xf3, 0xec, 0xd3, 0xe0, 0xe8, 0x88, 0xd0, 0xc0, 0xf0, 0xfa, 0xf8, 0xab, 0xd9, 0xf3, 0xf4, 0xf2, 0xd1, 0xfb, 0xf9, 0xaa, 0xd8, 0xf2, 0xa4, 0xfe, 0x00, 0xaa, 0xaa, 0xaa, 0xaa, 0x00, 0xfe, 0xc8, 0xf5, 0xe5, 0xd4, 0xe8, 0xd0, 0xe8, 0xd2, 0xd2, 0xe8, 0xd4, 0xe4, 0xd4, 0xe4, 0xd4, 0xe8, 0xd4, 0xe4, 0xd4, 0xe4, 0xd4, 0xe8, 0xd2, 0xd2, 0xe8, 0xd0, 0xe8, 0xd4, 0xe5, 0xf5, 0xc8, 0xf4, 0xd2, 0xea, 0xda, 0xea, 0xda, 0xea, 0xda, 0xa4, 0xf2, 0xd8, 0xaa, 0xf9, 0xfb, 0xd1, 0xf2, 0xf4, 0xf3, 0xd9, 0xab, 0xf8, 0xfa, 0xf0, 0xc0, 0xd0, 0x88, 0xe8, 0xe0, 0xd3, 0xec, 0xf3, 0xfe, 0xfd, 0xee, 0xfd, 0xfe, 0xdd, 0xfd, 0xfe, 0xf5, 0xfe, 0xfd, 0xbe, 0xdd, 0xfe, 0xed, 0xfd, 0xfa, 0xff, 
};
#else
const uint8_t PROGMEM splash_lower[] = {
1, 1, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM bButton_On[] = {
11, 54,
0x15, 0x00, 0x0f, 0x11, 0x11, 0x0f, 0x11, 0x11, 0x0f, 0x00, 0x15, 
0x00, 0x00, 0xc7, 0x28, 0x26, 0x21, 0xce, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xb1, 0x4a, 0x4a, 0x4a, 0x49, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x92, 0x52, 0x52, 0x56, 0x8a, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x83, 0x44, 0x44, 0x44, 0x87, 0x04, 0x04, 0x00, 0x00, 
0x00, 0x00, 0x93, 0x94, 0x94, 0xb4, 0x53, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
#else
const uint8_t PROGMEM bButton_On[] = {
1, 1, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM bButton_Off[] = {
11, 54,
0x15, 0x00, 0x0f, 0x11, 0x11, 0x0f, 0x11, 0x11, 0x0f, 0x00, 0x15, 
0x00, 0x00, 0xc7, 0x28, 0x26, 0x21, 0xce, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xb1, 0x4a, 0x4a, 0x4a, 0x49, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x92, 0x52, 0x52, 0x56, 0x8a, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x83, 0x44, 0x44, 0x44, 0x87, 0x04, 0x04, 0x00, 0x00, 
0x00, 0x00, 0x23, 0x24, 0x24, 0x74, 0x23, 0x20, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0x04, 0x04, 0x04, 0x0e, 0x04, 0x04, 0x18, 0x00, 0x00, 
};
#else
const uint8_t PROGMEM tibButton_Offtle[] = {
1, 1, 0x00
};
#endif

const uint8_t PROGMEM mission_number[] = {
41, 8,
0x7f, 0x02, 0x1c, 0x02, 0x7f, 0x00, 0x00, 0x44, 0x7d, 0x40, 0x00, 
0x00, 0x48, 0x54, 0x54, 0x54, 0x24, 0x00, 0x48, 0x54, 0x54, 0x54, 
0x24, 0x00, 0x00, 0x44, 0x7d, 0x40, 0x00, 0x00, 0x38, 0x44, 0x44, 
0x44, 0x38, 0x00, 0x7c, 0x08, 0x04, 0x04, 0x78, 
};

const uint8_t PROGMEM numbers_vert[] = {
7, 5,
0x0e, 0x11, 0x13, 0x15, 0x19, 0x11, 0x0e, 
0x0e, 0x04, 0x04, 0x04, 0x04, 0x06, 0x04, 
0x1f, 0x01, 0x01, 0x0e, 0x10, 0x11, 0x0e, 
0x0e, 0x11, 0x10, 0x0c, 0x10, 0x11, 0x0e, 
0x08, 0x08, 0x1f, 0x09, 0x0a, 0x0c, 0x08, 
0x0e, 0x11, 0x10, 0x10, 0x0f, 0x01, 0x1f, 
0x0e, 0x11, 0x11, 0x0f, 0x01, 0x02, 0x1c, 
0x01, 0x02, 0x04, 0x08, 0x10, 0x10, 0x1f, 
0x0e, 0x11, 0x11, 0x0e, 0x11, 0x11, 0x0e, 
0x07, 0x08, 0x10, 0x1e, 0x11, 0x11, 0x0e, 
};

const uint8_t PROGMEM numbers_horiz[] = {
5, 8,
0x3e, 0x51, 0x49, 0x45, 0x3e, 
0x00, 0x42, 0x7f, 0x40, 0x00, 
0x72, 0x49, 0x49, 0x49, 0x46, 
0x21, 0x41, 0x49, 0x4d, 0x33, 
0x18, 0x14, 0x12, 0x7f, 0x10,  
0x27, 0x45, 0x45, 0x45, 0x39, 
0x3c, 0x4a, 0x49, 0x49, 0x31, 
0x41, 0x21, 0x11, 0x09, 0x07, 
0x36, 0x49, 0x49, 0x49, 0x36, 
0x46, 0x49, 0x49, 0x29, 0x1e, 
};

#ifndef DEBUG
const uint8_t PROGMEM mission_successful_1[] = {
9, 64,
0xc0, 0x80, 0x80, 0x85, 0x80, 0x00, 0x80, 0x80, 0xc0, 
0xf2, 0x76, 0x76, 0x76, 0x76, 0x7f, 0x77, 0x73, 0xf3, 
0xbe, 0x9c, 0x1c, 0x1c, 0x1c, 0x9c, 0x9c, 0x9c, 0x3e, 
0xcd, 0x58, 0x18, 0x1e, 0x9f, 0xc7, 0xd1, 0xd9, 0x9b, 
0xe6, 0xcc, 0xcc, 0xcf, 0xcf, 0xc3, 0xc8, 0xcc, 0xed, 
0xb3, 0x99, 0x9d, 0x9d, 0x9d, 0x9d, 0x9d, 0x99, 0xb3, 
0x1c, 0x89, 0xcb, 0xcb, 0xeb, 0xeb, 0xf3, 0x79, 0x3c, 
0x03, 0x03, 0x03, 0xa3, 0x01, 0x02, 0x02, 0x02, 0x03, 
};
#else
const uint8_t PROGMEM mission_successful_1[] = {
1, 1, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM mission_successful[] = {
62, 24,
0x20, 0x00, 0x20, 0x00, 0x00, 0x01, 0xf7, 0x0f, 0xff, 0xfc, 0x08, 0xff, 0xff, 0xff, 0x01, 0x00, 0x01, 0xff, 0xff, 0xff, 0x01, 0x00, 0x8e, 0x1f, 0x39, 0x38, 0xf3, 0xf7, 0x00, 0x8e, 0x1f, 0x39, 0x38, 0xf3, 0xf7, 0x00, 0x01, 0xff, 0xff, 0xff, 0x01, 0x7c, 0xfe, 0xff, 0x01, 0x00, 0xff, 0xfe, 0x7c, 0x01, 0xfb, 0x07, 0x1f, 0x7e, 0xfc, 0xf1, 0xef, 0x00, 0x00, 0x20, 0x00, 0x20, 
0x40, 0xc0, 0xe0, 0xc0, 0x40, 0x01, 0x71, 0xf8, 0xc9, 0xc0, 0x98, 0xb9, 0x01, 0xf9, 0xf9, 0xf8, 0x01, 0x09, 0xf9, 0x09, 0xe1, 0xf0, 0xf9, 0x09, 0x00, 0x19, 0x79, 0x00, 0xe0, 0xf1, 0xf9, 0x08, 0x01, 0x19, 0x78, 0x00, 0xf9, 0xf9, 0xf9, 0x81, 0x09, 0x38, 0x00, 0x71, 0xf9, 0xc8, 0xc1, 0x98, 0xb8, 0x01, 0x71, 0xf9, 0xc8, 0xc0, 0x98, 0xb9, 0x01, 0x40, 0xc0, 0xe0, 0xc0, 0x40, 
0x02, 0x01, 0x00, 0x01, 0x02, 0x00, 0x0e, 0x0c, 0x09, 0x01, 0x0f, 0x07, 0x00, 0x07, 0x0f, 0x0f, 0x00, 0x08, 0x07, 0x00, 0x03, 0x07, 0x0f, 0x08, 0x00, 0x0c, 0x06, 0x00, 0x03, 0x07, 0x0f, 0x08, 0x00, 0x0c, 0x06, 0x00, 0x0f, 0x0f, 0x0f, 0x00, 0x0c, 0x0e, 0x00, 0x0e, 0x0c, 0x09, 0x01, 0x0f, 0x07, 0x00, 0x0e, 0x0c, 0x09, 0x01, 0x0f, 0x07, 0x00, 0x02, 0x01, 0x00, 0x01, 0x02, 
};
#else
const uint8_t PROGMEM mission_successful[] = {
1, 1, 0x00
};
#endif

const uint8_t PROGMEM total_img[] = {
7, 28,
0x84, 0x44, 0x44, 0x44, 0x84, 0x15, 0x1f, 
0x83, 0x44, 0x44, 0x44, 0xf3, 0x40, 0x40, 
0x78, 0x25, 0x38, 0x20, 0x19, 0x00, 0x00, 
0x0e, 0x04, 0x04, 0x04, 0x04, 0x04, 0x06, 
};

const uint8_t PROGMEM score_img[] = {
22, 8,
0x22, 0x25, 0x25, 0x19, 0x00, 0x18, 0x24, 0x24, 0x00, 0x18, 0x24, 0x24, 0x18, 0x00, 0x3c, 0x08, 0x04, 0x00, 0x18, 0x24, 0x34, 0x28, 
};

const uint8_t PROGMEM highScore_img[] = {
37, 8,
0x3f, 0x04, 0x3f, 0x00, 0x3a, 0x00, 0x18, 0xa4, 0x78, 0x00, 0x3e, 0x08, 0x38, 0x00, 0x00, 0x22, 0x25, 0x25, 0x19, 0x00, 0x18, 0x24, 0x24, 0x00, 0x18, 0x24, 0x24, 0x18, 0x00, 0x3c, 0x08, 0x04, 0x00, 0x18, 0x24, 0x34, 0x28, 
};

#ifndef DEBUG
const uint8_t PROGMEM credits_01[] = {
51, 16,
0x7c, 0xfe, 0xff, 0x01, 0x00, 0x83, 0xcf, 0x00, 0x01, 0xff, 0xff, 0xff, 0x00, 0xff, 0xef, 0xee, 0x00, 0xff, 0xff, 0xff, 0x10, 0x81, 0xc7, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xfe, 0x7c, 0x01, 0xff, 0xff, 0xff, 0x01, 0x00, 0x07, 0x00, 0xff, 0xff, 0xff, 0x00, 0x07, 0x00, 0xce, 0x9f, 0x39, 0x38, 0xf3, 0xf7, 
0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00, 
};

const uint8_t PROGMEM credits_02[] = {
5, 8,
0x12, 0x0e, 0x07, 0x0e, 0x12, 
};
#else
const uint8_t PROGMEM credits_01[] = {
1, 1, 0x00
};
const uint8_t PROGMEM credits_02[] = {
1, 1, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM filmote_01[] = {
11, 16,
0xf0, 0x38, 0xfd, 0x76, 0x7c, 0x7c, 0x7c, 0x76, 0xfd, 0x38, 0xf0, 
0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 
};

const uint8_t PROGMEM filmote_02[] = {
25, 8,
0x3f, 0x09, 0x01, 0x00, 0x3d, 0x00, 0x3f, 0x00, 0x38, 0x04, 0x38, 0x04, 0x38, 0x00, 0x18, 0x24, 0x24, 0x18, 0x02, 0x3f, 0x02, 0x18, 0x24, 0x34, 0x28, 
};
#else
const uint8_t PROGMEM filmote_01[] = {
1, 1, 0x00
};
const uint8_t PROGMEM filmote_02[] = {
1, 1, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM pharap_01[] = {
11, 16,
0xf8, 0x04, 0xfa, 0x8d, 0x8d, 0xfd, 0x8d, 0x8d, 0xfa, 0x04, 0xf8, 
0x00, 0x01, 0x1e, 0x21, 0x2f, 0x21, 0x2f, 0x21, 0x1e, 0x01, 0x00, 
};

const uint8_t PROGMEM pharap_02[] = {
27, 8,
0x3f, 0x09, 0x09, 0x06, 0x00, 0x3f, 0x04, 0x04, 0x38, 0x00, 0x18, 0x24, 0x04, 0x38, 0x00, 0x3c, 0x08, 0x00, 0x18, 0x24, 0x04, 0x38, 0x00, 0x78, 0x04, 0x24, 0x18, 
};
#else
const uint8_t PROGMEM pharap_01[] = {
1, 1, 0x00
};
const uint8_t PROGMEM pharap_02[] = {
1, 1, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM vampirics_01[] = {
11, 16,
0x01, 0x04, 0x11, 0x47, 0x1f, 0x7c, 0x3f, 0x07, 0x71, 0xc8, 0x1c, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x03, 0x01, 0x00, 0x00, 
};

const uint8_t PROGMEM vampirics_02[] = {
34, 8,
0x3f, 0x30, 0x0c, 0x02, 0x19, 0x24, 0x04, 0x38, 0x00, 0x38, 0x04, 0x38, 0x04, 0x38, 0x00, 0x78, 0x04, 0x24, 0x18, 0x00, 0x3d, 0x00, 0x3c, 0x08, 0x00, 0x3d, 0x00, 0x18, 0x24, 0x24, 0x00, 0x28, 0x34, 0x34, 
};
#else
const uint8_t PROGMEM vampirics_01[] = {
1, 1, 0x00
};
const uint8_t PROGMEM vampirics_02[] = {
1, 1, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM game_over[] = {
62, 24,
0x3c, 0x7e, 0xff, 0x00, 0xf1, 0x77, 0x80, 0xf0, 0x8c, 0x23, 0xff, 0xfe, 0xe0, 0x00, 0x81, 0xff, 0x0f, 0xfe, 0x08, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x08, 0x81, 0xe7, 0x00, 0x00, 0x00, 0x3c, 0x7e, 0xff, 0x00, 0xff, 0x7e, 0x3c, 0x01, 0x0f, 0x7f, 0xfd, 0x60, 0x0f, 0x01, 0x00, 0xff, 0xff, 0xff, 0x08, 0x81, 0xe7, 0x00, 0xff, 0xff, 0xff, 0x00, 0x7f, 0xf7, 0xf6, 0xc0, 
0x04, 0x84, 0x84, 0xc4, 0x84, 0x84, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x84, 0x84, 0xc4, 0x84, 0x84, 0x04, 0x04, 0x00, 0x00, 0x00, 0x10, 0x04, 0x20, 0x84, 0x50, 0x04, 0xf0, 0xf8, 0x98, 0xe8, 0x38, 0xb0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x84, 0x84, 0xc4, 0x84, 0x84, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x84, 0x84, 0xc4, 0x84, 0x84, 0x04, 
0x00, 0x04, 0x03, 0x01, 0x03, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x03, 0x01, 0x03, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x1a, 0x15, 0x12, 0x08, 0x01, 0x03, 0x06, 0x0f, 0x0b, 0x0c, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x03, 0x01, 0x03, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x03, 0x01, 0x03, 0x04, 0x00, 
};
#else
const uint8_t PROGMEM game_over[] = {
1, 1, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM usaf[] = {
34, 24,
0xe0, 0x10, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x10, 0x08, 0x84, 0x82, 0x82, 0x81, 0xc1, 0xf9, 0xf9, 0xc1, 0x81, 0x82, 0x82, 0x84, 0x08, 0x10, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x10, 0xe0, 
0x1f, 0x20, 0xa5, 0xa6, 0xa5, 0xa6, 0xa5, 0xa6, 0x25, 0x40, 0x80, 0x00, 0x41, 0x73, 0x3f, 0x1f, 0x1f, 0x1f, 0x1f, 0x3f, 0x73, 0x41, 0x00, 0x80, 0x40, 0x25, 0xa6, 0xa5, 0xa6, 0xa5, 0xa6, 0xa5, 0x20, 0x1f, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
#else
const uint8_t PROGMEM usaf[] = {
1, 1, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM high_img[] = {
8, 24,
0xff, 0x6e, 0xee, 0xee, 0xe0, 0x6e, 0xee, 0xee, 
0x1f, 0xfc, 0x9e, 0x6e, 0x6e, 0x1e, 0xff, 0xfe, 
0xff, 0xba, 0xba, 0xba, 0xb2, 0xcb, 0xfb, 0xfb, 
};
#else
const uint8_t PROGMEM high_img[] = {
1, 1, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM level_complete[] = {
60, 24,
0x50, 0x20, 0x00, 0x00, 0x01, 0xf7, 0x0f, 0xff, 0xfc, 0x08, 0xff, 0xff, 0xff, 0x01, 0x00, 0x01, 0xff, 0xff, 0xff, 0x01, 0x00, 0x8e, 0x1f, 0x39, 0x38, 0xf3, 0xf7, 0x00, 0x8e, 0x1f, 0x39, 0x38, 0xf3, 0xf7, 0x00, 0x01, 0xff, 0xff, 0xff, 0x01, 0x7c, 0xfe, 0xff, 0x01, 0x00, 0xff, 0xfe, 0x7c, 0x01, 0xfb, 0x07, 0x1f, 0x7e, 0xfc, 0xf1, 0xef, 0x00, 0x00, 0x20, 0x50, 
0x48, 0xc8, 0xa8, 0xc8, 0x49, 0x09, 0x08, 0x49, 0xc8, 0xa8, 0xc9, 0x49, 0x01, 0x01, 0x00, 0xe1, 0xf1, 0xf9, 0x09, 0x01, 0xf8, 0xf1, 0xe1, 0x08, 0xf9, 0xf9, 0xf8, 0x00, 0xf9, 0x19, 0x00, 0xf9, 0xf9, 0xf8, 0x80, 0x09, 0x39, 0x01, 0xf9, 0xf9, 0xf8, 0x00, 0xf9, 0x79, 0x30, 0x01, 0x00, 0x00, 0x49, 0xc9, 0xa9, 0xc8, 0x48, 0x08, 0x09, 0x49, 0xc8, 0xa8, 0xc8, 0x48, 
0x0a, 0x05, 0x02, 0x05, 0x0a, 0x00, 0x00, 0x0a, 0x05, 0x02, 0x05, 0x0a, 0x00, 0x00, 0x00, 0x03, 0x07, 0x0f, 0x08, 0x00, 0x0f, 0x07, 0x03, 0x00, 0x00, 0x07, 0x0f, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x00, 0x0c, 0x0e, 0x00, 0x0f, 0x0f, 0x0f, 0x00, 0x07, 0x0f, 0x0e, 0x04, 0x00, 0x00, 0x0a, 0x05, 0x02, 0x05, 0x0a, 0x00, 0x00, 0x0a, 0x05, 0x02, 0x05, 0x0a, 
};
#else
const uint8_t PROGMEM level_complete[] = {
1, 1, 0x00
};
#endif