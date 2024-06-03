#include "raylib.h"
#include <math.h> // Include math library for cos and sin functions

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;
    const int rectWidth = 100;
    const int rectHeight = 50;
    float rectX = 100.0f;
    float rectX1 = 100.0f + rectWidth + 10;
    int rectY = 100;
    int rectY1 = 100;
    float time = 0.0f; // Variable to keep track of elapsed time

    InitWindow(screenWidth, screenHeight, "psim - Particle Simulator in C");

    SetTargetFPS(60); // Set our game to run at 60 frames-per-second

    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
        time += GetFrameTime(); // Increment time by the time elapsed since last frame

        // Update the rectangle's X position using a cosine wave
        rectX = 100 + 50 * cos(time * 2.0f);  // Oscillate around X = 100 with amplitude 50
        rectX1 = 100 + 50 * cos(time * 2.0f); // Oscillate around Y = 100 with amplitude 50
        BeginDrawing();
        ClearBackground(RAYWHITE);
        Rectangle r1 = { (int)rectX, rectY, rectWidth, rectHeight };
        Rectangle r2 = { (int)rectX1, rectY1, rectWidth, rectHeight };
        DrawRectangleRec(r1, MAROON);
        DrawRectangleRec(r2, DARKBLUE);
        // if (CheckCollisionRecs(r1, r2))
        // {
        //     //make the two rectangles bounce off each other
        //     float temp = rectX;
        //     rectX = rectX1;
        //     rectX1 = temp;
        //     temp = rectY1;
        //     rectY1 = rectY;
        //     rectY = temp;
        // }
        EndDrawing();
    }

    CloseWindow(); // Close window and OpenGL context

    return 0;
}
