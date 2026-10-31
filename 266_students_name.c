#include<stdio.h>

const int max = 100;

int main(void){

    char students [10][12];
    unsigned short int x;
    printf ("\nenter students name,a blink line will end \n");
    for (x=0 ; x<max ; x++){
        printf ("enter student %5d : ",x+1);
        gets(students [x]);
        if (students[x][0] == '\0') x = max;
    }
    printf("\nyou entered : \n");
    for (x = 0 ; students [x][0] != '\0' && x<max; x++){
        printf ("student %5d : ",x+1);
        printf ("%s",students[x]);
    }
return 0;}