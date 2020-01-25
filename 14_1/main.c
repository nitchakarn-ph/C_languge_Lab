#include <stdio.h>
#include <stdlib.h>
#define N 100
struct Student
{
    int id;
    char name[100];
    int score;
    char gpa;
} std;
int main()
{
    FILE *fp;
    char filename[100];
    int n;
    int i=0;

    printf("Please enter a file name to write :");
    scanf("%s",filename);

    fp = fopen(filename,"r");
    if (fp == NULL)
    {
        printf("Error : the file could not be created.\n");
        exit(1);
    }
    printf("Enter the number of Students : ");
    scanf("%d",&n);
    struct Student std[N];
    for(i=0; i<n; i++)
    {
        printf("No. %d\t",i+1);
        printf("\tStudent ID :");
        scanf("%d%*c",&std[i].id);
        printf("\tName :");
        scanf("%100[^\n]s",std[i].name);
        printf("\tScore :");
        scanf("%d",&std[i].score);
        if (std[i].score>=80)
        {
            std[i].gpa = 'A';

        }else if (std[i].score>=70)
        {
            std[i].gpa = 'B';

        }else if (std[i].score>=60)
        {
            std[i].gpa = 'C';

        }else if (std[i].score>=50)
        {
            std[i].gpa = 'D';

        }else if (std[i].score<50)
        {
            std[i].gpa = 'F';

        }
        fprintf(fp,"%d\t%s\t%d\t%c\n",std[i].id,std[i].name,std[i].score,std[i].gpa);

    }
    for (i=0;i<n;i++)
    {
        printf("%d\t",std[i].id);
        printf("%s\t",std[i].name);
        printf("%d\t",std[i].score);
         printf("%c\n",std[i].gpa);
        fscanf(fp,"%d\t%s\t%d\t%c\n",&std[i].id,std[i].name,&std[i].score,&std[i].gpa);
    }

    fclose(fp);
    return 0;
}
