
//§ Filling in c 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
int main(void){
    FILE *fptr;
    char ch;
    fptr = fopen("textfile.text","w");
    printf("write to file : \n");
    while ((ch = getche()) != '\r');
    {
        putc(ch,fptr);
    }
    fclose(fptr);
return 0;}