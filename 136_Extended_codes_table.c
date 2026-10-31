#include<stdio.h>
#include<conio.h>

int main(void){
    int key1,key2 ;
    while ((key1 =getch())!='\r')
    {
        if (key1 ==0){
            key2=getch();
            printf("\nthis is exteneded code = %d\n",key2);            
        }
        else{
            printf("this is a normal code = %d\n",key1);
            printf("the value of the key1 %d\n",key2);
        }
    }
    
return 0;}