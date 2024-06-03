#include "raylib.h"

int main(void)
{

    const int screenWidth = 800;
    const int screenHeight = 450;
    int rectX = 100;
    int rectY = 100;
    InitWindow(screenWidth, screenHeight, "psim - Particle Simulator in C");

    SetTargetFPS(60); // Set our game to run at 60 frames-per-second

    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
        
        BeginDrawing();

            ClearBackground(RAYWHITE);
            DrawRectangle(100, 100, 100, 50, BLUE);
            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow(); // Close window and OpenGL context
    return 0;
}