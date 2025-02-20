#ifndef PLAYER_H
#define PLAYER_H

#include "raylib.h"

struct Player {
    Vector3 position;
    float speed;
    float health;
};

extern Player player;

void UpdatePlayer(float deltaTime);
void Shoot();

#endif
