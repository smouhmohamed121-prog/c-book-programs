#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void desplay (char array [5][10],int num );
int main(void){
    int i=0 ;
    char user_name [10] ;
    int t = 0;
    char name [5][10]={
        {"mohamed"},
        {"shadow"},
        {"gojo"},
        {"alchemist"},
        {"delta"},
    };
    do 
    {
        system("cls");
        printf ("Enter your name : ");
        scanf ("%s",user_name);
        for (i; i<5;i++){
            if (strcmp(user_name,name[i])==0){
                printf("Welcome Mir I am glade to see you again");
                t = 1;
                printf("Names are :\n");
                desplay(name,5);
            }
        }
    }while(t==0);
    return 0;
}
void desplay(char array[5][10],int num){
    for (int i=0 ; i<num ;i++){
        printf("%s\n",array[i]);
    }
}


    // int matrix [3][4][5];
    // int i,j,f;
    // for (i=0 ; i<3 ; i++){
    //     for (j=0 ; j<4 ; j++){
    //         for (f=0 ; f<5 ; f++){
    //             printf ("matrix [%d][%d][%d] = ",i,j,f);
    //             scanf ("%d",&matrix [i][j][f]);
    //         }
    //     }
    // }

    // for (i=0 ; i<3 ; i++){
    //     for (j=0 ; j<4 ; j++){
    //         for (f=0 ; f<5 ; f++){
    //             printf ("matrix [%d][%d][%d] = %d",i,j,f,matrix [i][j][f]);
    //         }
    //     }
    // }