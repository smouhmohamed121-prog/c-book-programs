#include<stdio.h>
#include<stdlib.h>
//§ ptr = calloc (no ,size)
int main(void){

    int nbr_grades = 0;
    int total = 0;
    int ctr = 0;
    int *student_grades ;
    char trash [80]; /* to clear keyboard buffer*/
    while ( nbr_grades <1 || nbr_grades >= 10000)
    {
        printf ("how many grades will be entered ? > ");
        scanf ("%ld",&nbr_grades);
        gets (trash);
    }

    student_grades = (int *) calloc (nbr_grades, sizeof (int));
    if (student_grades == NULL) 
    {
        printf ("\nError in line %3.3d : Could not allocate memory",__LINE__);
        return 1;
    }
    for (ctr =0 ; ctr <nbr_grades ; ctr++){
        printf ("Enter grade %4.4d : ",ctr+1);
        scanf ("%d",student_grades +ctr);
    }
    printf ("\n\n you entered the following : \n");
    for (ctr =0 ; ctr <nbr_grades ; ctr++){
        printf ("Enter grade %4.4d : %d\n",ctr+1,*(student_grades + ctr));
        // printf ("%d",*(student_grades +ctr));
        total += *(student_grades + ctr);
    }
    printf ("\n the average grade is %.3f\n\n",((float)total /nbr_grades));
    free (student_grades);


return 0;}