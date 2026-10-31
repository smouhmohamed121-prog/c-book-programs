#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>  // for SetConsoleOutputCP

#define TRUE 1
#define NUM 5

// ANSI ESC Sequences
#define CLEAR_SCREEN   "\x1B[2J"
#define RESET          "\x1B[0m"
#define GREEN_ON_BLACK "\x1B[42;30m"
#define WHITE_ON_BLUE  "\x1B[44;37m"
#define MOVE_CURSOR(y,x) printf("\x1B[%d;%dH", (y), (x))

// Arrow Key Codes
#define U_ARROW 72
#define D_ARROW 80

// Box Drawing Characters (Extended ASCII - Code page 437)
#define TOP_LEFT       201
#define TOP_RIGHT      187
#define BOTTOM_LEFT    200
#define BOTTOM_RIGHT   188
#define HORIZONTAL     205
#define VERTICAL       186

// Function Declarations
void fancy_box(int x1, int y1, int x2, int y2);
void display(char *arr[], int size, int pos);
char getcode(void);
void action(int pos);

int main(void) {
    SetConsoleOutputCP(437); // Use Code Page 437 for box drawing

    static char *items[NUM] = {
        "OPEN",
        "CLOSE",
        "SAVE",
        "PRINT",
        "QUIT"
    };

    int curpos = 0;

    system("cls");
    printf(CLEAR_SCREEN);
    fancy_box(1, 1, 80, 24);      // Outer frame
    fancy_box(8, 8, 60, 20);      // Menu frame

    while (TRUE) {
        display(items, NUM, curpos);
        switch (getcode()) {
            case U_ARROW:
                if (curpos > 0) --curpos;
                else curpos = NUM - 1;
                break;
            case D_ARROW:
                if (curpos < NUM - 1) ++curpos;
                else curpos = 0;
                break;
            case '\r':
                action(curpos);
                break;
        }
    }

    return 0;
}

void fancy_box(int x1, int y1, int x2, int y2) {
    int i;

    MOVE_CURSOR(y1, x1); putchar(TOP_LEFT);
    for (i = x1 + 1; i < x2; i++) putchar(HORIZONTAL);
    putchar(TOP_RIGHT);

    for (i = y1 + 1; i < y2; i++) {
        MOVE_CURSOR(i, x1); putchar(VERTICAL);
        MOVE_CURSOR(i, x2); putchar(VERTICAL);
    }

    MOVE_CURSOR(y2, x1); putchar(BOTTOM_LEFT);
    for (i = x1 + 1; i < x2; i++) putchar(HORIZONTAL);
    putchar(BOTTOM_RIGHT);
}

void display(char *arr[], int size, int pos) {
    for (int j = 0; j < size; j++) {
        MOVE_CURSOR(10 + j, 15);  // Adjust position as needed
        if (j == pos) {
            printf(GREEN_ON_BLACK);
        } else {
            printf(WHITE_ON_BLUE);
        }
        printf("  %-10s  ", arr[j]);
        printf(RESET);
    }
}

char getcode(void) {
    int ch = getch();
    if (ch == 0 || ch == 224) {
        ch = getch(); // Get extended key code
        return ch;
    }
    return ch; // Regular key like ENTER
}

void action(int pos) {
    MOVE_CURSOR(22, 1);
    printf(RESET); // Reset color
    printf("\x1B[0K"); // Clear line

    printf("You selected: ");
    switch (pos) {
        case 0: printf("OPEN\a\n"); break;
        case 1: printf("CLOSE\a\n"); break;
        case 2: printf("SAVE\a\n"); break;
        case 3: printf("PRINT\a\n"); break;
        case 4: exit(0);
    }

    printf("Press any key to continue...");
    getch();

    // Clear message area after key press
    MOVE_CURSOR(22, 1);
    printf("\x1B[0K");
}
