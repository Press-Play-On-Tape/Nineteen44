#pragma once

const uint8_t PROGMEM bullet_img[] = {
3, 8,
0x00, 0x07, 0x02, 0x07, 0x00, 0x07,  
};

const uint8_t PROGMEM p38_0[] = {
18, 19,
0x00, 0x20, 0xB0, 0xF0, 0x20, 0x20, 0x20, 0x60, 0x60, 0x60, 0xBC, 0x66, 0xBC, 0x60, 0x00, 0x30, 0x00, 0x00,
0x00, 0x20, 0x6F, 0x7F, 0x20, 0x20, 0x20, 0x32, 0x37, 0x35, 0xED, 0x37, 0xED, 0x35, 0x07, 0x67, 0x02, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,

0x00, 0x20, 0xB0, 0xF0, 0x20, 0x20, 0x20, 0x60, 0x60, 0x60, 0xBC, 0x66, 0xBC, 0x60, 0x00, 0x60, 0x00, 0x00,
0x00, 0x20, 0x6F, 0x7F, 0x20, 0x20, 0x20, 0x32, 0x37, 0x35, 0xED, 0x37, 0xED, 0x35, 0x07, 0x37, 0x02, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_1[] = {
12, 19,
0x00, 0x20, 0xF0, 0x20, 0x20, 0x60, 0xFC, 0xFE, 0x20, 0x00, 0x00, 0x00,
0x00, 0x20, 0x7F, 0x20, 0x22, 0x37, 0xFD, 0xFF, 0x25, 0x07, 0x02, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_2[] = {
6, 19,
0x00, 0x20, 0x20, 0xFE, 0x60, 0x00,
0x00, 0x22, 0x27, 0xFF, 0x37, 0x00,
0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
};

const uint8_t PROGMEM p38_3[] = {
12, 19,
0x00, 0x00, 0x00, 0x20, 0xFE, 0xFC, 0x20, 0x20, 0x20, 0xF0, 0x20, 0x00,
0x00, 0x02, 0x07, 0x27, 0xFF, 0xFF, 0x27, 0x22, 0x20, 0xFF, 0x20, 0x00,
0x00, 0x00, 0x00, 0x00, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_4[] = {
18, 19,
0x00, 0x00, 0x00, 0x00, 0x60, 0xFC, 0xFE, 0xFC, 0x60, 0x60, 0x60, 0x20, 0x20, 0x20, 0xF0, 0xF0, 0x20, 0x00,
0x00, 0x02, 0x07, 0x07, 0x37, 0xFF, 0xFF, 0xFF, 0x37, 0x37, 0x32, 0x20, 0x20, 0x20, 0x7F, 0x7F, 0x20, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_6[] = {
6, 19,
0x00, 0x60, 0xFE, 0x20, 0x20, 0x00,
0x00, 0x37, 0xFF, 0x27, 0x22, 0x00,
0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_mask_0[] = {
0x70, 0xF8, 0xF8, 0xF8, 0xF8, 0x70, 0xF0, 0xF0, 0xF0, 0xFC, 0xFE, 0xFF, 0xFE, 0xFC, 0xF0, 0x80, 0x00, 0x00,
0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0x70, 0x7A, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x0F, 0x07, 0x02,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_mask_1[] = {
0x70, 0xF8, 0xF8, 0xF8, 0x70, 0xFC, 0xFE, 0xFF, 0xFE, 0xF0, 0x00, 0x00,
0x70, 0xFF, 0xFF, 0xFF, 0x77, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x07, 0x02,
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x03, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_mask_2[] = {
0x70, 0x70, 0xFE, 0xFF, 0xFE, 0x70,
0x72, 0x77, 0xFF, 0xFF, 0xFF, 0x77,
0x00, 0x00, 0x03, 0x07, 0x03, 0x00,
};

const uint8_t PROGMEM p38_mask_3[] = {
0x00, 0x00, 0xA0, 0xFE, 0xFF, 0xFE, 0xFC, 0x70, 0xF0, 0xF8, 0xF0, 0x20,
0x02, 0x07, 0x2F, 0xFF, 0xFF, 0xFF, 0xFF, 0x77, 0x7F, 0xFF, 0x7F, 0x20,
0x00, 0x00, 0x00, 0x03, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_mask_4[] = {
0x00, 0x00, 0x80, 0xF0, 0xFC, 0xFE, 0xFF, 0xFE, 0xFC, 0xF0, 0xF0, 0xF0, 0x70, 0xF0, 0xF8, 0xF8, 0xF0, 0x20,
0x02, 0x07, 0x0F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x7A, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0x20,
0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_mask_6[] = {
0x60, 0xFE, 0xFF, 0xFE, 0x70, 0x20,
0x37, 0xFF, 0xFF, 0xFF, 0x77, 0x22,
0x00, 0x03, 0x07, 0x03, 0x00, 0x00,
};

const uint8_t PROGMEM p38_shrink_1[] = {
6, 19,
0x00, 0x60, 0xFE, 0x20, 0x20, 0x00,
0x00, 0x37, 0xFF, 0x27, 0x22, 0x00,
0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_shrink_2[] = {
5, 19,
0x00, 0x40, 0xFC, 0x40, 0x00,
0x00, 0x17, 0xFF, 0x12, 0x00,
0x00, 0x00, 0x01, 0x00, 0x00,
};

const uint8_t PROGMEM p38_shrink_3[] = {
5, 19,
0x00, 0x40, 0xF0, 0x00, 0x00,
0x00, 0x12, 0x7F, 0x02, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_shrink_4[] = {
5, 19,
0x00, 0x80, 0xE0, 0x00, 0x00,
0x00, 0x0A, 0x3F, 0x02, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_shrink_mask_1[] = {
0x60, 0xFE, 0xFF, 0xFE, 0x70, 0x20,
0x37, 0xFF, 0xFF, 0xFF, 0x77, 0x22,
0x00, 0x03, 0x07, 0x03, 0x00, 0x00,
};

const uint8_t PROGMEM p38_shrink_mask_2[] = {
  0x40, 0xFC, 0xFE, 0xFC, 0x40,
  0x17, 0xFF, 0xFF, 0xFF, 0x12,
  0x00, 0x01, 0x03, 0x01, 0x00,
};

const uint8_t PROGMEM p38_shrink_mask_3[] = {
0x40, 0xF0, 0xF8, 0xF0, 0x00,
0x12, 0x7F, 0xFF, 0x7F, 0x02,
0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_shrink_mask_4[] = {
0x80, 0xE0, 0xF0, 0xE0, 0x00,
0x0A, 0x3F, 0x7F, 0x3F, 0x02,
0x00, 0x00, 0x00, 0x00, 0x00,
};

// const uint8_t PROGMEM p38_move_up[] = {
// 18, 19,
// 0x00, 0x00, 0x80, 0xe8, 0xfc, 0x18, 0x08, 0x48, 0xe8, 0xe0, 0xc8, 0xcc, 0xc8, 0xe0, 0xec, 0xc0, 0x40, 0x00, 
// 0x00, 0x0c, 0x1d, 0x0f, 0x05, 0x0c, 0x0c, 0x0e, 0x0e, 0x06, 0x7d, 0xe6, 0xfd, 0x76, 0x00, 0x0c, 0x00, 0x00, 
// 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
// };

// const uint8_t PROGMEM p38_move_up_mask[] = {
// 0x00, 0x80, 0xe8, 0xfc, 0xfe, 0xfc, 0x5c, 0xfc, 0xfc, 0xf8, 0xfc, 0xfc, 0xfc, 0xfc, 0xfe, 0xfc, 0xe0, 0x40, 
// 0x0c, 0x1f, 0x3f, 0x1f, 0x0f, 0x1f, 0x1e, 0x1f, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x1f, 0x0c, 0x00, 
// 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 
// };

// const uint8_t PROGMEM p38_move_down[] = {
// 18, 19,
// 0x00, 0x80, 0xc0, 0x80, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0xf0, 0x38, 0xfc, 0x70, 0x00, 0x80, 0x00, 0x00, 
// 0x00, 0x01, 0x0d, 0xbf, 0xfd, 0xc1, 0x81, 0x93, 0xbb, 0x3b, 0x9d, 0x9b, 0x9d, 0x3b, 0xb8, 0x19, 0x10, 0x00, 
// 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
// };

// const uint8_t PROGMEM p38_move_down_mask[] = {
// 0x80, 0xc0, 0xe0, 0xc0, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xf0, 0xf8, 0xfc, 0xfe, 0xfc, 0xf0, 0xc0, 0x80, 0x00, 
// 0x01, 0x0f, 0xbf, 0xff, 0xff, 0xff, 0xd3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x39, 0x10, 
// 0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x03, 0x01, 0x00, 0x00, 
// };


const uint8_t PROGMEM p38_move[] = {
18, 19,
0x00, 0x00, 0x80, 0xe8, 0xfc, 0x18, 0x08, 0x48, 0xe8, 0xe0, 0xc8, 0xcc, 0xc8, 0xe0, 0xec, 0xc0, 0x40, 0x00, 
0x00, 0x0c, 0x1d, 0x0f, 0x05, 0x0c, 0x0c, 0x0e, 0x0e, 0x06, 0x7d, 0xe6, 0xfd, 0x76, 0x00, 0x0c, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x00, 0x80, 0xc0, 0x80, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0xf0, 0x38, 0xfc, 0x70, 0x00, 0x80, 0x00, 0x00, 
0x00, 0x01, 0x0d, 0xbf, 0xfd, 0xc1, 0x81, 0x93, 0xbb, 0x3b, 0x9d, 0x9b, 0x9d, 0x3b, 0xb8, 0x19, 0x10, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
};

const uint8_t PROGMEM p38_move_mask[] = {
0x00, 0x80, 0xe8, 0xfc, 0xfe, 0xfc, 0x5c, 0xfc, 0xfc, 0xf8, 0xfc, 0xfc, 0xfc, 0xfc, 0xfe, 0xfc, 0xe0, 0x40, 
0x0c, 0x1f, 0x3f, 0x1f, 0x0f, 0x1f, 0x1e, 0x1f, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x1f, 0x0c, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 

0x80, 0xc0, 0xe0, 0xc0, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xf0, 0xf8, 0xfc, 0xfe, 0xfc, 0xf0, 0xc0, 0x80, 0x00, 
0x01, 0x0f, 0xbf, 0xff, 0xff, 0xff, 0xd3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x39, 0x10, 
0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x03, 0x01, 0x00, 0x00, 
};

const uint8_t PROGMEM ammo_gauge[] = {
17, 6,
0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 
};

const uint8_t PROGMEM ammo_gauge_mask[] = {
0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
};

const uint8_t PROGMEM ammo_gauge_item[] = {
3, 4,
0x00, 0x06, 0x00, 
};

const uint8_t PROGMEM ammo_gauge_item_mask[] = {
0x0f, 0x0f, 0x0f, 
};