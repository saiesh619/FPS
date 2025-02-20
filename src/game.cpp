#include "game.h"
#include "player.h"
#include "enemy.h"
#include "bullet.h"

void InitGame() {
    player.health = 100.0f;
    DrawPlane((Vector3){0, 0, 0}, (Vector2){50, 50}, DARKGRAY);  // Large ground

}

void UpdateGame(float deltaTime) {
    UpdatePlayer(deltaTime);
    UpdateBullets(deltaTime);
    UpdateEnemies(deltaTime);
    CheckBulletCollisions();
}

void DrawGame() {
    DrawCube(player.position, 1.0f, 2.0f, 1.0f, BLUE);
    
    for (int i = 0; i < enemyCount; i++) {
        if (enemies[i].active) DrawCube(enemies[i].position, 1.0f, 2.0f, 1.0f, RED);
    }
    
    for (int i = 0; i < bulletCount; i++) {
        if (bullets[i].active) DrawSphere(bullets[i].position, 0.2f, RED);
    }
}
