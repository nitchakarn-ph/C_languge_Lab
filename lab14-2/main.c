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
    //int n;
    char gpa;
     printf("Please enter a file name to read :");
     scanf("%s",filename);
     StuF = fopen(filename,"r+");
     if (StuF == (NULL))
     {
         printf("Error : the file coule not be creted.\n");
         exit(1);
     }
    int i=0;



        printf("No.%d\tstudent ID : ",i+1);
        fscanf(StuF,"%d%*c",&std[i].id);
        //getc(std[i].id);
        printf("Name : ");
        fscanf(StuF,"%100[^\n]s",std[i].name);
        //gets(std[i].name);
        printf("score : ");
        fscanf(StuF,"%d",&std[i].score);
        //getc(std[i].score);
        //fprintf(StuF,"%d\t%s\t%d\n",std[i].id,std[i].name,std[i].score);



    if (std[i].score>=80)
    {
        gpa = 'A';
        printf("A");
    }else if (std[i].score>=70)
    {
       gpa = 'B';
        printf("B");
    }else if (std[i].score>=60)
    {
        gpa = 'C';
         printf("C");
    }else if (std[i].score>=50)
    {
        gpa = 'D';
         printf("D");
    }else if (std[i].score<50)
    {
        gpa = 'F';
         printf("F");
    }
    //fprintf(StuF,"%c\n",gpa);

    fprintf(StuF,"%c\n",gpa);
    fclose(StuF);

    return 0;
}

