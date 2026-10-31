#include <time.h>
#include <stdio.h>

int main() {
    clock_t start = clock();
    // Code to measure
    unsigned int i =0 ;
    for (i=0 ; i<1000000; i++){
    }
    clock_t end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", time_taken);
    return 0; 
}