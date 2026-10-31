#include <stdio.h>
#include <unistd.h>

// ANSI escape codes
#define RED_FG         "\x1B[31m"
#define GREEN_BG       "\x1B[42m"
#define RESET_COLOR    "\x1B[0m"
#define CURSOR_POSITION(row, col)    printf("\x1B[%d;%dH", (row), (col))

int main(void) {
    int j;

    printf(RED_FG);
    printf(GREEN_BG);

    for (j = 0; j < 10; j++) {
        printf("ALLAH ");
        fflush(stdout);  // ensure it prints immediately
        /*
        int fflush(FILE *stream);
        stream is usually:

stdout for console output

stdin for input

Or a file pointer if you’re working with files (FILE *fp)*/
        sleep(1);        // sleep for 1 second
    }

    CURSOR_POSITION(15, 8);
    printf(" THE GOD ");
    printf(RESET_COLOR);  // reset colors at the end

    return 0;
}
