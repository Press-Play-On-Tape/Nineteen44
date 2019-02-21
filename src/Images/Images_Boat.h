#ifndef IMAGES_BOAT_H
#define IMAGES_BOAT_H

#ifndef DEBUG
const uint8_t PROGMEM boat[] = {
39, 16,    
0x80, 0xC0, 0x60, 0xB0, 0x58, 0xA8, 0x5C, 0xAC, 0x54, 0xAE, 0xFA, 0x8E, 0xF7, 0x95, 0x9F, 0xF5, 0x97, 0x9D, 0xF7, 0x95, 0x9F, 0xFD, 0xFF, 0xFD, 0x7F, 0x7D, 0x3F, 0xDD, 0xDF, 0xDD, 0x3F, 0xFE, 0xFE, 0xFE, 0x0C, 0xFC, 0x18, 0xF0, 0xC0,
0x00, 0x01, 0x03, 0x06, 0x0D, 0x0A, 0x1D, 0x1A, 0x15, 0x3A, 0x2F, 0x38, 0x77, 0x54, 0x7C, 0x57, 0x74, 0x5C, 0x77, 0x54, 0x7C, 0x5F, 0x7F, 0x5F, 0x7F, 0x5F, 0x7E, 0x5D, 0x7D, 0x5D, 0x7E, 0x3F, 0x3F, 0x3F, 0x18, 0x1F, 0x0C, 0x07, 0x01,
};
#else
const uint8_t PROGMEM boat[] = {
1, 1, 0x00, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM boat_mask[] = {
0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0xF8, 0xFC, 0xFC, 0xFC, 0xFE, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFE, 0xFC, 0xFC, 0xF8, 0xF0, 0xC0,
0x00, 0x01, 0x03, 0x07, 0x0F, 0x0F, 0x1F, 0x1F, 0x1F, 0x3F, 0x3F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x3F, 0x3F, 0x1F, 0x1F, 0x0F, 0x07, 0x01,
};
#else
const uint8_t PROGMEM boat_mask[] = {
1, 1, 0x00, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM boat_turrent_N[] = {
9, 16,
0xFF, 0xFF, 0xC7, 0xBB, 0xB8, 0xBB, 0xC7, 0xFF, 0xFF,
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
};
#else
const uint8_t PROGMEM boat_turrent_N[] = {
1, 1, 0x00, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM boat_turrent_NE[] = {
9, 16,
0xFF, 0xFF, 0xC7, 0xBB, 0xBB, 0xBB, 0xC3, 0xFD, 0xFE,
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
};
#else
const uint8_t PROGMEM boat_turrent_NE[] = {
1, 1, 0x00, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM boat_turrent_E[] = {
9, 16,
0xFF, 0xFF, 0xC7, 0xBB, 0xBB, 0xBB, 0xC7, 0xEF, 0xEF,
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
};
#else
const uint8_t PROGMEM boat_turrent_E[] = {
1, 1, 0x00, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM boat_turrent_SE[] = {
9, 16,
0xFF, 0xFF, 0xC7, 0xBB, 0xBB, 0xBB, 0x87, 0x7F, 0xFF,
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00,
};
#else
const uint8_t PROGMEM boat_turrent_SE[] = {
1, 1, 0x00, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM boat_turrent_S[] = {
9, 16,
0xFF, 0xFF, 0xC7, 0xBB, 0x3B, 0xBB, 0xC7, 0xFF, 0xFF,
0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01,
};
#else
const uint8_t PROGMEM boat_turrent_S[] = {
1, 1, 0x00, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM boat_turrent_SW[] = {
9, 16,
0xFF, 0x7F, 0x87, 0xBB, 0xBB, 0xBB, 0xC7, 0xFF, 0xFF,
0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
};
#else
const uint8_t PROGMEM boat_turrent_SW[] = {
1, 1, 0x00, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM boat_turrent_W[] = {
9, 16,
0xEF, 0xEF, 0xC7, 0xBB, 0xBB, 0xBB, 0xC7, 0xFF, 0xFF,
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
};
#else
const uint8_t PROGMEM boat_turrent_W[] = {
1, 1, 0x00, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM boat_turrent_NW[] = {
9, 16,
0xFE, 0xFD, 0xC3, 0xBB, 0xBB, 0xBB, 0xC7, 0xFF, 0xFF,
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
};
#else
const uint8_t PROGMEM boat_turrent_NW[] = {
1, 1, 0x00, 0x00
};
#endif

#ifndef DEBUG
const uint8_t PROGMEM boat_turrent_mask[] = {
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
};
#else
const uint8_t PROGMEM boat_turrent_mask[] = {
1, 1, 0x00, 0x00
};
#endif

#endif