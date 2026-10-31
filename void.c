#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<raylib.h>

#define BOARD_SIZE 8
#define TILE_SIZE 42
#define TILE_TYPES 5

const char tile_chars [TILE_TYPES] = {'#','@','$','%','&'};
char board [BOARD_SIZE][BOARD_SIZE] ;
Vector2 grid_origin;
Texture2D background;


char random_tile  (){
    return tile_chars [rand () % TILE_TYPES];
}

void init_board (){
    for (int y= 0; y< BOARD_SIZE ; y++){
        for (int x=0 ; x < BOARD_SIZE ; x++){
            board[y][x]= random_tile();
        }
    }
    int gird_width = BOARD_SIZE *  TILE_SIZE;
    int gird_height = BOARD_SIZE * TILE_SIZE;
    grid_origin = ( Vector2 ){
        (GetScreenWidth () - gird_width) /2,
        (GetScreenHeight ()- gird_height) /2,
    }; 
}
int main (void){

    const int screen_width = 800;
    const int screen_height = 450;
    InitWindow(screen_width,screen_height,"Raylib 2D Assci match game");
    SetTargetFPS(60);
    srand(time(NULL));

    init_board ();
    
    while (!WindowShouldClose()){

        BeginDrawing ();
        ClearBackground(BLACK);
        for (int y= 0; y<BOARD_SIZE;y++){
            for (int x = 0 ;x<BOARD_SIZE ;x++){
                Rectangle rect = {
                    grid_origin.x + (x*TILE_SIZE),
                    grid_origin.y + (y*TILE_SIZE),
                    TILE_SIZE,
                    TILE_SIZE
                };

                DrawRectangleLinesEx(rect , 1, DARKGRAY );
                DrawTextEx(
                    GetFontDefault(),
                    TextFormat("%c",board[y][x]),
                    (Vector2) {rect.x +12, rect.y +8},
                    20,0,RED
                );
            }
        }
        EndDrawing();
    }

    CloseWindow ();

return 0;}