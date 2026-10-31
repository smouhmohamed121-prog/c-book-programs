#include<stdio.h>
#include<string.h>
int main(void){
    char name[10];
    char *saluate ="greeting ms";
    puts("Name : ");
    //! gets(name);
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1] = '\0';
    printf("%s ",saluate);
    puts(name);
    
return 0;}