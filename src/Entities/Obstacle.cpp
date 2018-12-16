#include "Obstacle.h"
#include "../Utils/Arduboy2Ext.h"
#include "Sprites.h"
#include "../Utils/Enums.h"
#include "FixedPoints.h"
#include "FixedPointsCommon.h"
#include "../Images/Images_Obstacles.h"

#ifdef OLD_OBSTACLES
Obstacle::Obstacle(const SQ15x16 x, const SQ15x16 y, const uint8_t *bitmapRef, const uint8_t *maskRef, const SQ7x8 speed, const SQ7x8 value) :
          Base(x, y) {

  _enabled = false;
  _value = value;
  _speed = speed;
  _bitmap = bitmapRef;
  _mask = maskRef;
    
}
#else
Obstacle::Obstacle(const SQ15x16 x, const SQ15x16 y, const uint8_t *bitmapRef, const SQ7x8 speed, const SQ7x8 value) :
          Base(x, y) {

  _enabled = false;
  _value = value;
  _speed = speed;
  _bitmap = bitmapRef;
}            
#endif

Rect Obstacle::getRect() {

  #ifdef OLD_OBSTACLES
  return (Rect){ _x.getInteger() + 1, _y.getInteger() + 1, static_cast<uint8_t>(pgm_read_byte(&_bitmap[0]) - 2), static_cast<uint8_t>(pgm_read_byte(&_bitmap[1]) - 2) };
  #else
  return (Rect){ _x.getInteger() + 1, _y.getInteger() + 1, 12, 10 };
  #endif

}

void Obstacle::move() {

  if (_enabled) {
    _x = _x - (SQ15x16)_speed;
  }

}

SQ7x8 Obstacle::getValue() {

  return _value;

}

void Obstacle::setValue(const SQ7x8 value) {

  _value = value;

}

SQ7x8 Obstacle::getSpeed() {

  return _value;

}

void Obstacle::setSpeed(const SQ7x8 value) {

  _speed = value;

}

ObstacleType Obstacle::getObstacleType() {

  return _obstacleType;

}

void Obstacle::setObstacleType(const ObstacleType value) {

  _obstacleType = value;
  
}

void Obstacle::setBitmap(const uint8_t *value) {

  _bitmap = value;
  
}

#ifdef OLD_OBSTACLES
void Obstacle::setMask(const uint8_t *value) {

  _mask = value;
  
}
#endif

void Obstacle::renderImage() {
    
  if (_enabled && _x.getInteger() + OBSTACLE_WIDTH >= 0 && _x.getInteger() < WIDTH) {
    #ifdef OLD_OBSTACLES
    Sprites::drawExternalMask(_x.getInteger(), _y.getInteger(), _bitmap, _mask, 0, 0);
    #else
    Sprites::drawExternalMask(_x.getInteger(), _y.getInteger(), _bitmap, power_up_mask, 0, 0);
    #endif
  }
  else if (_x.getInteger() + OBSTACLE_WIDTH < 0) {
    _enabled = false;
  }

}
