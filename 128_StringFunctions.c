#include<stdio.h>
#include<string.h>
#define const char 'd'
int main(void){
    char string1 [] = "mohamed";
    char string2 [] = "youssef";
    char string3 [] = "shadow garden";
    char string4 [30] = {'o'};
    char stringl [] = "ATOMIc";
    char stringU [] = "smalL";
    //? strcpy ((strcat(string1,string2)),string4);
    printf (strcat(string1,string2));
    //? int num = strchr(2,5);
    //? printf("%d",num);
    printf("\n%d",strcmp(string1,string2));
    printf("\n%d",strcmp(string3,string2));
    strcpy(string4,string1);
    printf("\n%s",string4);
    //* srtlwr()
    printf ("\n");
    printf (strlwr(stringl));
    //todo strupr ()
    printf ("\n");
    printf (strupr(stringU));
    //* strrev ()
    printf ("\n");
    printf (strrev (string3));
    //* strsett ()
    //? printf ("\n");
    //? printf (strset (string3,3));
    //* strncat ()
    //? printf (strncat(string1,'d',1));
    
return 0;}
