#include <stdio.h>
//§ ANSI escape codes
//§ Text Formatting
#define RESET          "\x1B[0m"        // Normal : Resets all attributes (style, color, etc.) to default.
#define BOLD           "\x1B[1m"        // Makes the text bold.
#define UNDER_LINE     "\x1B[4m"        // Underlines the text.
#define BLINK          "\x1B[5m"        // Makes the text blink (may not work in all terminals).
#define REVERSE        "\x1B[7m"        // Inverts the text and background colors.
#define HIDDEN         "\x1B[8m"        // Invisible text : Hides the text (doesn't always work in every terminal).
#define STRIKETHROUGH  "\x1B[9m"        // Strikes through the text. 
//§ Background and foreground 
    /*
        0 = Black       8 = Gray
    1 = Blue        9 = Light Blue
    2 = Green       A = Light Green
    3 = Aqua        B = Light Aqua
    4 = Red         C = Light Red
    5 = Purple      D = Light Purple
    6 = Yellow      E = Light Yellow
    7 = White       F = Bright White

    */
//--> using the system("COLOR BG-FG") in stdlib.h
//§ Foreground Colors (Text Color)
#define BLACK_FG       "\x1B[30m"
#define RED_FG         "\x1B[31m"
#define GREEN_FG       "\x1B[32m"
#define YELLOW_FG      "\x1B[33m"
#define BLUE_FG        "\x1B[34m"
#define MAGENTA_FG     "\x1B[35m"
#define CYAN_FG        "\x1B[36m"
#define WHITE_FG       "\x1B[37m"
#define DEFAULT_FG     "\x1B[39m"

//§ Background Colors
#define BLACK_BG       "\x1B[40m"
#define RED_BG         "\x1B[41m"
#define GREEN_BG       "\x1B[42m"
#define YELLOW_BG      "\x1B[43m"
#define BLUE_BG        "\x1B[44m"
#define MAGENTA_BG     "\x1B[45m"
#define CYAN_BG        "\x1B[46m"
#define WHITE_BG       "\x1B[47m"
#define DEFAULT_BG     "\x1B[49m"

//§ Cursor Control
#define CURSOR_UP           "\x1B[A"
#define CURSOR_DOWN         "\x1B[B"
#define CURSOR_RIGHT        "\x1B[C"
#define CURSOR_LEFT         "\x1B[D"
#define CURSOR_POSITION(row, col)    printf("\x1B[%d;%dH", (row), (col))
// #define CURSOR_POSITION     "\x1B[row;columnH"
#define CURSOR_POSITION1    "\x1B[%d;%df"
#define CURSOR_SAVE         "\x1B[s"
#define CURSOR_RESTORE      "\x1B[u"
#define CURSOR_UP_NUM       "\x1B[%dA"
#define CURSOR_DOWN_NUM     "\x1B[%dB"
#define CURSOR_RIGHT_NUM    "\x1B[%dC"
#define CURSOR_LEFT_NUM     "\x1B[%dD"


//§ Screen Control
#define CLEAR_SCREEN   "\x1B[2J"
#define CLEAR_LINE     "\x1B[2K"      // Clear current line
#define CLEAR_TO_END   "\x1B[0J"     // Clear from cursor to end of screen
#define CLEAR_TO_START "\x1B[1J"
#define CLEAR_TO_END_LINE "\x1B[0K"     //Clear from cursor to end of line
#define CLEAR_TO_START_LINE "\x1B[1K"   //Clear from cursor to start of line

//§ Text Attributes/Effects
#define BRIGHT_TEXT    "\x1B[1m"        // Makes text brighter (used in conjunction with colors
#define DIM_TEXT       "\x1B[2m"        //You can apply multiple text styles together with this code.
#define NORMAL_BRIGHTNESS "\x1B[22m"    //Resets brightness to normal.

//§ Cursor Visibility
#define HIDE_CURSOR    "\x1B[?25l"
#define SHOW_CURSOR    "\x1B[?25h"

//§ 256 Colors (Extended colors)
#define SET_FG_256     "\x1B[38;5;COLORm"
#define SET_BG_256     "\x1B[48;5;COLORm"

//§ RGB (True Colors)
#define SET_FG_RGB     "\x1B[38;2;R;G;Bm"
#define SET_BG_RGB     "\x1B[48;2;R;G;Bm"


//§ Function keys (F1-F12)
#define F1         59
#define F2         60
#define F3         61
#define F4         62
#define F5         63
#define F6         64
#define F7         65
#define F8         66
#define F9         67
#define F10        68
#define F11        69
#define F12        70


//§ Arrow Keys
#define U_ARROW 72
#define L_ARROW 75
#define R_ARROW 77
#define D_ARROW 80

//§ WHAT TO DRAW 
#define ACROSS 205
#define UPDOWN 186

//§ Other special keys
#define HOME        71
#define PageUp      73
#define End         79
#define PageDown    81
#define Insert      82
#define DEL         83
#define ESC         27
#define ENTER       10
#define BACKSPACE   8
#define TAB         9
#define SPACE       32
#define DELETE      127
//§ Control keys
#define CTRL_A      1
#define CTRL_B      2
#define CTRL_C      3
#define CTRL_D      4
#define CTRL_E      5
#define CTRL_F      6
#define CTRL_G      7
#define CTRL_H      8
#define CTRL_I      9
#define CTRL_J      10
#define CTRL_K      11
#define CTRL_L      12
#define CTRL_M      13
#define CTRL_N      14
#define CTRL_O      15
#define CTRL_P      16
#define CTRL_Q      17
#define CTRL_R      18
#define CTRL_S      19
#define CTRL_T      20
#define CTRL_U      21
#define CTRL_V      22
#define CTRL_W      23
#define CTRL_X      24
#define CTRL_Y      25
#define CTRL_Z      26

//§ Shift + Key combinations
#define SHIFT_1     33    // '!'
#define SHIFT_2     34    // '"'
#define SHIFT_3     35    // '#'
#define SHIFT_4     36    // '$'
#define SHIFT_5     37    // '%'
#define SHIFT_6     38    // '&'
#define SHIFT_7     39    // '''
#define SHIFT_8     40    // '('
#define SHIFT_9     41    // ')'
#define SHIFT_0     42    // '0'
#define SHIFT_EQ    43    // '='
#define SHIFT_TAB   15

//§ Alt + Key combinations 
#define ALT_Q  16
#define ALT_R  17
#define ALT_S  18
#define ALT_T  19
#define ALT_U  20
#define ALT_V  21
#define ALT_W  22
#define ALT_X  23
#define ALT_Y  24
#define ALT_P  25

#define ALT_A  30
#define ALT_B  31
#define ALT_C  32
#define ALT_D  33
#define ALT_E  34
#define ALT_F  35
#define ALT_G  36
#define ALT_H  37
#define ALT_I  38

#define ALT_Z  44
#define ALT_Y  45
#define ALT_X  46
#define ALT_W  47
#define ALT_V  48
#define ALT_U  49
#define ALT_T  50
/*
and there is this shift f1 to f10 is 84 to 93
ctrl f1 to f10 it is 94 103
alt f1 to f10 is 104 to 113
ctrl prtsc is 114
ctrl left arrow is 115 
ctrl right arrow is 116
ctrl end is 117
ctrl home is 119
alt + 1,2 to 0 is 120 to 131 
ctrl pgup is 132

pgdn is 118*/