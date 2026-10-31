#include "raylib.h"

/*
§ Vector2 
typedef struct Vector2 {
    float x;  // X component
    float y;  // Y component
} Vector2;

*/

int main(void)
{
    InitWindow(800, 600, "Vector2 example");

    Vector2 position = {400.0f, 300.0f};
    Vector2 speed = {2.0f, 3.0f};

    while (!WindowShouldClose())
    {
        position.x += speed.x;
        position.y += speed.y;

        // Bounce off screen edges
        if ((position.x > 800) || (position.x < 0)) speed.x *= -1;
        if ((position.y > 600) || (position.y < 0)) speed.y *= -1;

        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawCircleV(position, 20, MAROON);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
