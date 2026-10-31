#include<stdio.h>

//§ Pointers and functions
#define SIZE 5
void addcos(int *array , int size , int const);

int main(void){
    int tab [SIZE] = {1,2,3,4,5};
    addcos(tab , SIZE ,1);
    for (int i=0 ; i<SIZE ; i++){
        printf ("%d\t",*(tab+i));
    }
return 0;}

void addcos( int *array , int size , int constante){
    int j=0;
    for (j; j<size ; j++){
        //? *(array) = *(array++) + constante ;
        *(array+j) += 1;
    }
}