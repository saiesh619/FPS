#ifndef BULLET_H
#define BULLET_H

#include "raylib.h"

struct Bullet {
    Vector3 position;
    Vector3 velocity;
    bool active;
};

extern Bullet bullets[];
extern int bulletCount;

void Shoot();
void UpdateBullets(float deltaTime);

#endif
