#include<stdio.h>
#include<stdlib.h>
//§ void ptr = *malloc(size)
const int max = 100;

int main(void){
    unsigned long int nbr_students = 0;
    unsigned long int ctr = 0;
    char *stud_name ;
    char trash [80] ; /* to clear the keybord buffer */
    while (nbr_students <1 || nbr_students > 2000000000 )
    {
        printf ("\nHow many students will be entered ? \n");
        printf ("> ");
        scanf ("%d",&nbr_students);
        gets (trash); /* clear out keybord buffer */
    }
    stud_name = (char *) malloc (35 * nbr_students);
    if (stud_name == NULL) /*verify malloc () was successful */
    {
        printf ("\nError in line %3.3d : could not alloce memory.",__LINE__);
        return 1;
    }

    for (ctr =0 ; ctr< nbr_students ; ctr++)
    {
        printf ("Enter student %5d : ",ctr +1 );
        gets (stud_name+(ctr*35));
    }
    printf ("\n\nYou entered the following :\n");
    for (ctr =0 ; ctr< nbr_students ; ctr++)
    {
        printf ("\nStudent %5d :",ctr +1 );
        printf ("%s",stud_name + (ctr*35));
    }   
    free(stud_name);
    printf("\n");
return 0;}