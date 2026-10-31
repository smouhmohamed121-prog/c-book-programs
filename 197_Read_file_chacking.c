//§ filing in c page 197
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void){

    char ch;
    FILE *fptr ;
    fptr = fopen ("textfile.txt","r");
    if (fptr == NULL) 
    {
        printf ("can't open the file ");
        exit(1);
    }
    while ((ch = getc(fptr)) != EOF)
    {
        printf ("%c",ch);
    }
    fclose(fptr);
    // getch();
return 0;}