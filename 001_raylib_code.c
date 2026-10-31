#include<stdio.h>
// #include<rlgl.h>
//§ C:\msys64\ucrt64\include [the path to the compiler libraries]

#include<raylib.h>
#include<raymath.h>

int main(void)
{
    InitWindow(800, 450, "Raylib Window");
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello, Raylib!", 200, 200, 20, DARKGRAY);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}