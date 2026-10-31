#include<stdio.h>
// #include<stdlib.h>
#include<string.h>
union test
{
    int age ;
    char name[20];
};

int main(void){

    union test person;
    person.age = 66;
    strcpy (person.name,"mohamed");
    printf ("union person.age : %d\n",person.age);
    printf ("union person.name : %s\n",person.name);
printf("\nSIZE :\n");
    printf ("sizeof U person.age %d\n",sizeof(person.age));
    printf ("sizeof U person.name %d\n",sizeof(person.name));
printf ("\nADRESS :\n");
    printf ("adress of U person.age %p\n",&person.age);
    printf ("adress of U person.name %p\n",&person.name);


return 0;}

