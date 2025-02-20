#include "ui.h"
#include "raylib.h"
#include "player.h"
#include "enemy.h"

void DrawUI() {
    DrawText(TextFormat("Health: %.0f", player.health), 10, 10, 20, RED);
    DrawText(TextFormat("Enemies Left: %d", enemyCount), 10, 40, 20, GREEN);
}
