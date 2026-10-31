#include<stdio.h>
#include<stdlib.h>

typedef enum botton {ON , OFF} Botton;

Botton press (Botton current);
void print_Botton (Botton current);

int main(void){

    Botton power = ON ;
    print_Botton (power);
    power = press (power);
    print_Botton (power);

    
return 0;}


Botton press (Botton current)
{
    if ( current == ON) return OFF;
    else return ON ;
}
void print_Botton (Botton current)
{
    if (current == ON) printf ("ON\n");
    else printf ("OFF\n");
}