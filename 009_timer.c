#include <raylib.h>
#include <stdio.h>
#include <stdio.h>


//§ gcc main.c -lraylib -lgdi32 -lwinmm -o main.exe -mwindows
const int WINDOW_WIDTH = 450;
const int WINDOW_HEIGHT = 450;

#include <stdio.h>

int main(void) {
    // Initialize window
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "20-Minute Timer");
    SetTargetFPS(60);

    // Track time
    double startTime = GetTime();  // GetTime() returns seconds since InitWindow()
    const double targetDuration = 20 * 60;  // 20 minutes in seconds

    while (!WindowShouldClose()) {
        double elapsed = GetTime() - startTime;
        double remaining = targetDuration - elapsed;

        // When timer reaches 0, display "Time's up!"
        BeginDrawing();
        ClearBackground(RAYWHITE);

        if (remaining > 0) {
            int minutes = (int)(remaining / 60);
            int seconds = (int)((int)remaining % 60);

            DrawText("Timer Running...", 100, 150, 20, DARKGRAY);

            char buffer[64];
            snprintf(buffer, sizeof(buffer), "%02d:%02d remaining", minutes, seconds);
            DrawText(buffer, 120, 200, 30, BLUE);
        } else {
            DrawText("20 minutes passed!", 80, 200, 30, RED);
        }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}







