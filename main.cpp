#include <iostream>
#include <string>
#include <raylib.h>

int main(int argc, char const *argv[])
{
    InitWindow(800, 600, "BulletsGame RAYLIB");
    SetTargetFPS(60); // Set the target frames per second
    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
        BeginDrawing();
        ClearBackground(RAYWHITE); // Clear the background with white color

        DrawText("Hellow World NOW WITH COMPILING VIA BUTTON ON VSCODE!", 0, 0, 20, BLACK); // Draw some text

        EndDrawing();
    }
    CloseWindow(); // Close the window and OpenGL context
    return 0;
}
