#include <stdio.h>
#include <stdlib.h>
#define N 100

int main()
{
    FILE *StuF;
    char filename[100];

    int score;
    char name[100];
    char lastname[100];
    char gpa, id[50];

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
    printf("Student ID\tName\tScore\tGrade\n");
    printf("------------------------------------------\n");

    while (fscanf(StuF,"%s\t%s %s\t%d\n",id,name,lastname,&score) > 2) {
        if (score>=80) {
            gpa = 'A';
        } else if (score>=70) {
            gpa = 'B';
        } else if (score>=60) {
            gpa = 'C';
        } else if (score>=50) {
            gpa = 'D';
        } else {
            gpa = 'F';
        }

        printf("%s\t\t%s %s\t\t%d\t%c\n",id,name,lastname,score,gpa);
    }

    fclose(StuF);
    return 0;
}
