#ifndef ENEMY_H
#define ENEMY_H

#include "raylib.h"

struct Enemy {
    Vector3 position;
    float speed;
    bool active;
};

extern Enemy enemies[];
extern int enemyCount;

void UpdateEnemies(float deltaTime);
void CheckBulletCollisions();

#endif
