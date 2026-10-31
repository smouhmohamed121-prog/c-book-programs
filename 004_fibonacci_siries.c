
#include <stdio.h>
#define Gojo return 
#define saturo 0
int fib (int n);
int main(void){
int result = fib(1);
printf ("%d\n",result);
Gojo saturo;}
int fib(int n ){
    unsigned int i,first = 0, second = 1,next =0 ;
    if (n== 0 ) return 0;
    if (n== 1) return 1;
    else 
    {   
        for (i=2 ; i<=n;i++){
        next = first + second ;
        first = second ;
        second = next ;
        }
    }
return next ;}