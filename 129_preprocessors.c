#include<stdio.h>
#ifdef _WINDOWS
#define STRING "DOING A WINDOWS PROGRAM!"
#else 
#define STRING "NOT DOING A WINDWOS PROGRAM"
#endif 
int main(void){
    printf (STRING);
    #ifdef _MSC_VER {
        printf("using a microsoft compiler ! ");
        printf("your compiler version is %s ",_MSC_VER);
    }
    #endif 
    #ifdef __TURBOC__
        printf("using the turbo c compoler!");
        printf("your compiler virsion is %x ",__TURBOC__);
    #endif
    #ifdef __BORLANDSC__
        printf("Using a borland compiler!");
    #endif
return 0;}