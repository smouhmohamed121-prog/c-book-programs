#include<stdio.h>


struct person
{
    int number ;
    char *name ;
};
    struct group
    {
        struct person person1;
        struct person person2;
        int code;
    };
    



int main(void){
    
    struct group group1;
    group1.person1.number = 1;
    group1.person1.name ="mehdi";

    group1.code = 55;
    group1.person2 = group1.person1;
    printf ("%d",group1.person1.number);
return 0;}