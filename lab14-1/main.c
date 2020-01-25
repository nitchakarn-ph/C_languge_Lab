#include <stdio.h>
#include <stdlib.h>
#define N 100
typedef struct
{
    int id;
    char name[100];
    int score;
} Student;
int main()
{
    FILE *StuF;
    char filename[100];
     Student std[N];
      int n;
     printf("Please enter a file name to write :");
     scanf("%s",filename);
     StuF = fopen(filename,"w+");
     if (StuF == (NULL))
     {
         printf("Error : the file could not be created.\n");
         exit(1);
     }

    printf("Enter the number of student:");
    scanf("%d",&n);

    int i=0;
    for (i=0;i<n;i++)
    {
        printf("No.%d\tstudent ID : ",i+1);
        scanf("%d%*c",&std[i].id);
        printf("Name : ");
        scanf("%100[^\n]s",std[i].name);
        printf("score : ");
        scanf("%d",&std[i].score);
        fprintf(StuF,"%d\t%s\t%d\n",std[i].id,std[i].name,std[i].score);
    }

    fclose(StuF);

    return 0;
}
