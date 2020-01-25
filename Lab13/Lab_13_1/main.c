#include <stdio.h>
#include <stdlib.h>
#define n 100
#include <string.h>


struct Student
{
    int no;
    int id;
    char name [30];
    int score;
};

//void printstu(struct Student stu[n],int N);
int main()
{
    int N,i;
    struct Student stu60[n];
    printf("Enter the number of student :");
    scanf("%d",&N);

    for(i=0; i<N; i++)
    {
        printf("No. %d",i+1);
        printf("\tStudent ID :");
        scanf("%d",&stu60[i].id);
        printf("\tName :");
        scanf("%s",stu60[i].name);

        printf("\tScore :");
        scanf("%d",&stu60[i].score);
    }
    printf("=========Student=========\n");
    for(i=0;i<N;i++)
    {
        printf("------------No. %d --------------\n",i+1);
        printf("Student ID \t:%d\n",stu60[i].id);
        printf("Name\t\t:%s\n",stu60[i].name);
        printf("Score\t\t:%d\n",stu60[i].score);
    }

    return 0;
}
