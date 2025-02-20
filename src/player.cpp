#include "player.h"
#include "bullet.h"

Player player = {{0.0f, 1.0f, -5.0f}, 5.0f, 100.0f};

void UpdatePlayer(float deltaTime) {
    if (IsKeyDown(KEY_W)) player.position.z += player.speed * deltaTime;
    if (IsKeyDown(KEY_S)) player.position.z -= player.speed * deltaTime;
    if (IsKeyDown(KEY_A)) player.position.x -= player.speed * deltaTime;
    if (IsKeyDown(KEY_D)) player.position.x += player.speed * deltaTime;
    
    if (IsKeyPressed(KEY_SPACE)) Shoot();
}
