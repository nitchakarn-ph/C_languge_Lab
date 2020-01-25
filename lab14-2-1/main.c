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

    int id,score;
    char name[100];
    char lastname[100];
    char gpa;

    //int n;
     printf("Please enter a file name to read :");
     scanf("%s",filename);
     StuF = fopen(filename,"r");
     if (StuF == (NULL))
     {
         printf("Error : the file could not be created.\n");
         exit(1);
     }
    printf("------------------------------------------\n");
    printf("Student ID\tName\t\tScore\tGrade\n");
    printf("------------------------------------------\n");


    while (fscanf(StuF,"%d\t%s %s\t%d\n",&id,name,lastname,&score)> 2) {
    if (score>=80)
    {
        gpa = 'A';
        printf("A");
    }else if (score>=70)
    {
       gpa = 'B';
        printf("B");
    }else if (score>=60)
    {
        gpa = 'C';
         printf("C");
    }else if (score>=50)
    {
        gpa = 'D';
         printf("D");
    }else if (score<50)
    {
        gpa = 'F';
         printf("F");
    }
    //fscanf(StuF,"%d\t%s %s\t%d\n",&id,name,lastname,&score);
    printf("%d\t \t%s %s\t%d\t%c\n",id,name,lastname,score,gpa);
    }


     fclose(StuF);
return 0;
}
