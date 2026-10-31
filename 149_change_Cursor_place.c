#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main(void){
    int x,y;
    while (1)
    {
    printf ("\nX : ");
    scanf ("%d",&x);
    printf ("Y : ");
    scanf("%d",&y);
    printf ("\x1B[%d;%df",x,y);
    printf ("\x1B[2J");
    printf ("*");
    sleep(1);
    }
    
    
return 0;}