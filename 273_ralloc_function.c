#include<stdio.h>
#include<stdlib.h>
//§ ptr = realloc (size)

#define _name 20


int main(void){


    unsigned long int student_cout = 0;
    unsigned long int ctr = 0 ;
    char *student_name = NULL ;
    while ((student_name = realloc (student_name, (_name * student_cout +1 ))) != NULL ) 
    {
        printf ("Enter student %5d :",student_cout + 1);
        gets (student_name + (student_cout *_name));
        if (student_name [student_cout * _name] == NULL)  break;
        else student_cout ++;
    }
    printf ("\n you entered the following :\n");
    for (ctr=0 ; ctr <student_cout ;ctr++)
    {
        printf ("\nStudent %5d :",ctr+1);
        printf ("%s",student_name + (ctr * _name));
    }
    free (student_name);
return 0;}