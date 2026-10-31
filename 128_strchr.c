#include<stdio.h>
#include<string.h>
int main(void){
char str[] = "Hello, World!";
char *result = strchr(str, 'o');
if (result != NULL) {
    printf("Character found: %c\n", *result);
} else {
    printf("Character not found\n");
}
return 0;}