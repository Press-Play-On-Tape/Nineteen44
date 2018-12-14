#include "EnemyBullet.h"
#include "../Utils/Enums.h"

EnemyBullet::EnemyBullet() { }

void EnemyBullet::move() {

  _x = _x + static_cast<int8_t>(pgm_read_byte(&movement_x_offset[static_cast<uint8_t>(getDirection())]) * 2);
  _y = _y + static_cast<int8_t>(pgm_read_byte(&movement_y_offset[static_cast<uint8_t>(getDirection())]) * 2);

  if (_x > WIDTH - SCOREBOARD_OUTER_RECT_WIDTH) setEnabled(false);  
  if (_y > HEIGHT) setEnabled(false);
  
}

