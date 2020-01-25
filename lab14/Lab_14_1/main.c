#include <stdio.h>
#include <stdlib.h>
int main()
{
    char fileName[20];
    printf("Please enter a file name to write :");
    scanf ("%s",fileName);

    FILE *fp;
        fp = fopen(fileName,"w");
        if (fp== NULL)
        {
            printf("Error the could not be created");
        }
    int N,i=0;
     printf("Enter rhe number of student:")  ;
     scanf("%d",&N);

     int id,score;
     char name[40];
     for (i=0;i<N;i++)
        {
        printf("No. %d",i+1) ;
        printf("\tStudent ID :") ;
        scanf("%d%*c",&id);
        printf("\tfirst name :") ;
        scanf("%50[^\n]s",&name);
        printf("\tScore :") ;
        scanf("%d",&score);
        fprintf(fp,"%d\t%s \t%d\n",id,name,score);
        }
    return 0;
}
