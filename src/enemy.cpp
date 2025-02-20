#include "enemy.h"
#include "player.h"
#include "bullet.h"

int enemyCount = 3;
Enemy enemies[] = {
    {{-3.0f, 1.0f, 5.0f}, 2.0f, true},
    {{3.0f, 1.0f, 10.0f}, 2.0f, true},
    {{0.0f, 1.0f, 15.0f}, 2.0f, true}
};

void UpdateEnemies(float deltaTime) {
    for (int i = 0; i < enemyCount; i++) {
        if (enemies[i].active) {
            if (player.position.z < enemies[i].position.z) enemies[i].position.z -= enemies[i].speed * deltaTime;
            if (player.position.z > enemies[i].position.z) enemies[i].position.z += enemies[i].speed * deltaTime;
            if (player.position.x < enemies[i].position.x) enemies[i].position.x -= enemies[i].speed * deltaTime;
            if (player.position.x > enemies[i].position.x) enemies[i].position.x += enemies[i].speed * deltaTime;
        }
    }
}

void CheckBulletCollisions() {
    for (int i = 0; i < enemyCount; i++) {
        if (!enemies[i].active) continue;
        
        for (int j = 0; j < bulletCount; j++) {
            if (bullets[j].active && CheckCollisionSpheres(enemies[i].position, 1.0f, bullets[j].position, 0.2f)) {
                enemies[i].active = false;
                bullets[j].active = false;
            }
        }
    }
}
