#include <raylib.h>
#include <stdio.h>

int main (void){
    InitWindow (800,800,"A windows");
    Vector2 center1 = {100.0f,400.0f};
    Vector2 center2 = {200.0f,400.0f};

    while (!WindowShouldClose())
    {
        BeginDrawing();
        DrawCircleV(center1, 20,RED);
        DrawCircleV(center2, 20,GREEN);
        EndDrawing();
    }
    
return 0;}