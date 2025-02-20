#include "bullet.h"
#include "player.h"

int bulletCount = 10;
Bullet bullets[10];

void Shoot() {
    for (int i = 0; i < bulletCount; i++) {
        if (!bullets[i].active) {
            bullets[i] = {player.position, {0.0f, 0.0f, 10.0f}, true};
            break;
        }
    }
}

void UpdateBullets(float deltaTime) {
    for (int i = 0; i < bulletCount; i++) {
        if (bullets[i].active) {
            bullets[i].position.z += bullets[i].velocity.z * deltaTime;
            if (bullets[i].position.z > 50.0f) bullets[i].active = false;
        }
    }
}
