#include<stdio.h>
// #include<stdlib.h>
//§ int86 (INTno , &inregs , & outregs)

#define _mem 0x12 
int main(void){

    struct   WORDREGS 
    {
        unsigned int ax;
        unsigned int bx;
        unsigned int cx;
        unsigned int dx;
        unsigned int flags ;
    };
    struct BYTEREGS 
    {
        unsigned char al,ah;
        unsigned char bl,bh;
        unsigned char cl,ch;
        unsigned char dl,dh;
    };
    
    union REGS
    {
        struct WORDREGS x;
        struct BYTEREGS y;
    };

    union REGS regs ;
    int size ;
    int86 (_mem , &regs ,&regs);
    size = regs.x.ax;
    printf ("Memory size is %d kilo bytes",size);
    
return 0;}