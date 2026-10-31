#include<stdio.h>
#include<conio.h>

//§ for moving the cursor
#define MOUVE_U "\x1B[A"
#define MOUVE_D "\x1B[B"
#define MOUVE_R "\x1B[C"
#define MOUVE_L "\x1B[D"

//§ DETERMING WHAT ARRO 
#define U_ARROW 72
#define D_ARROW 80
#define R_ARROW 77
#define L_ARROW 75

//§ WHAT TO DRAW 
#define ACROSS 205
#define UPDOWN 186

int main(void){

    int key1 ,key2;
    printf("\x1B[2J");
    while ((key1 == getch())== 0)
    {
        key2 = getch();
        switch (key2)
        {
        case U_ARROW: printf(MOUVE_U); printf("%c",UPDOWN); break;
        case D_ARROW: printf(MOUVE_D); printf("%c",UPDOWN); break;
        case R_ARROW: printf(MOUVE_R); printf("%c",ACROSS); break;
        case L_ARROW: printf(MOUVE_L); printf("%c",ACROSS); break;
        }
        printf(MOUVE_L);
    }
return 0;}