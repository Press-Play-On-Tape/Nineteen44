#pragma once


#ifdef PLAYER_US
const uint8_t * const player_images[] PROGMEM = { p38_0, p38_1, p38_2, p38_3, p38_4, p38_3, p38_6, p38_1, p38_mask_0, p38_mask_1, p38_mask_2, p38_mask_3, p38_mask_4, p38_mask_3, p38_mask_6, p38_mask_1, explosion_01, explosion_02, explosion_03, explosion_04, explosion_mask_01, explosion_mask_02, explosion_mask_03, explosion_mask_04, p38_shrink_1, p38_shrink_2, p38_shrink_3, p38_shrink_4, p38_shrink_mask_1, p38_shrink_mask_2, p38_shrink_mask_3, p38_shrink_mask_4 };
#endif

#ifdef PLAYER_JAPANESE
const uint8_t * const player_images[] PROGMEM = { zero_0, zero_1, zero_2, zero_3, zero_4, zero_3, zero_6, zero_1, zero_mask_0, zero_mask_1, zero_mask_2, zero_mask_3, zero_mask_4, zero_mask_3, zero_mask_6, zero_mask_1, explosion_01, explosion_02, explosion_03, explosion_04, explosion_mask_01, explosion_mask_02, explosion_mask_03, explosion_mask_04, zero_shrink_1, zero_shrink_2, zero_shrink_3, zero_shrink_4, zero_shrink_mask_1, zero_shrink_mask_2, zero_shrink_mask_3, zero_shrink_mask_4 };
#endif

const uint8_t * const enemy_zero_images[] PROGMEM = { zero_N, zero_NE, zero_E, zero_SE, zero_S, zero_SW, zero_W, zero_NW, zero_mask_N, zero_mask_NE, zero_mask_E, zero_mask_SE, zero_mask_S, zero_mask_SW, zero_mask_W, zero_mask_NW, explosion_01, explosion_02, explosion_03, explosion_04, explosion_mask_01, explosion_mask_02, explosion_mask_03, explosion_mask_04 };
const uint8_t * const enemy_zero_hollow_images[] PROGMEM = { zero_hollow_N, zero_hollow_NE, zero_hollow_E, zero_hollow_SE, zero_hollow_S, zero_hollow_SW, zero_hollow_W, zero_hollow_NW, zero_mask_N, zero_mask_NE, zero_mask_E, zero_mask_SE, zero_mask_S, zero_mask_SW, zero_mask_W, zero_mask_NW, explosion_01, explosion_02, explosion_03, explosion_04, explosion_mask_01, explosion_mask_02, explosion_mask_03, explosion_mask_04 };
const uint8_t * const enemy_medium_images[] PROGMEM = { enemy_medium, enemy_medium, enemy_medium, enemy_medium, enemy_medium, enemy_medium, enemy_medium, enemy_medium, enemy_medium_mask, enemy_medium_mask, enemy_medium_mask, enemy_medium_mask, enemy_medium_mask, enemy_medium_mask, enemy_medium_mask, enemy_medium_mask, explosion_01, explosion_02, explosion_03, explosion_04, explosion_mask_01, explosion_mask_02, explosion_mask_03, explosion_mask_04 };
const uint8_t * const enemy_boat[] PROGMEM = { boat_turrent_N, boat_turrent_NE, boat_turrent_E, boat_turrent_SE, boat_turrent_S, boat_turrent_SW, boat, boat_turrent_NW, boat_turrent_mask, boat_turrent_mask, boat_turrent_mask, boat_turrent_mask, boat_turrent_mask, boat_turrent_mask, boat_mask, boat_turrent_mask, explosion_01, explosion_02, explosion_03, explosion_04, explosion_mask_01, explosion_mask_02, explosion_mask_03, explosion_mask_04 };
