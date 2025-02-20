#include "raylib.h"
#include "player.h"
#include "enemy.h"
#include "bullet.h"
#include "game.h"
#include "ui.h"

const int screenWidth = 800;
const int screenHeight = 600;

int main() {
    InitWindow(screenWidth, screenHeight, "Simple FPS AI Shooter");
    SetTargetFPS(60);
    
    InitGame();  // Initialize player, enemies, bullets
    
Camera camera = { 
    { player.position.x, player.position.y + 2.0f, player.position.z - 5.0f },  // Move the camera behind and above the player
    { player.position.x, player.position.y, player.position.z + 1.0f },  // Look forward
    { 0.0f, 1.0f, 0.0f },  // Up vector
    45.0f,  // FOV
    0
};

    while (!WindowShouldClose()) {
        float deltaTime = GetFrameTime();
        UpdateGame(deltaTime);
        
        BeginDrawing();
        ClearBackground(RAYWHITE);
        BeginMode3D(camera);
        DrawGame();
        EndMode3D();
        DrawUI();
        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}
