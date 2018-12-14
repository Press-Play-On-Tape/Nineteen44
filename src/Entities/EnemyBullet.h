#pragma once
 
#include "EnemyBullet.h"
#include "Bullet.h"
#include "../Utils/Arduboy2Ext.h"
#include "../Utils/Enums.h"

class EnemyBullet : public Bullet {

  public:

    EnemyBullet();

    void move();

};
