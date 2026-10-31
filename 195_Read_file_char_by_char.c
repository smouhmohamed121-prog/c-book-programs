#include<stdio.h>
#include<conio.h>

int main(void){

    FILE *fptr;
    fptr = fopen ("textfile.txt","r");
    char ch;
    //? clearerr(fptr);
    printf ("contents of the file :\n");
    while ((ch = getc(fptr)) != EOF);
    {
        printf ("%c",ch);
    }
    fclose (fptr);
    getch();

return 0;}  