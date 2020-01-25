#include <stdio.h>
#include <stdlib.h>
#define n 100


struct Student
{
    int no;
    int id;
    char name [30];
    int score;

};
void inputStudent(struct Student pstds[n], int N )
{
          int i=0;

          for (i=0;i<N;i++) {
          pstds[i].no = i+1;
                  printf("No. %d",pstds[i].no);
                  printf("\tStudent ID :");
                  scanf("%d",&pstds[i].id);
                  printf("\tName :");
                  scanf("%s",pstds[i].name);
                  printf("\tScore :");
                  scanf("%d",&pstds[i].score);
          }
}
void printStudent(struct Student std)
{
        printf("------------No. %d --------------\n",std.no);
        printf("Student ID \t:%d\n",std.id);
        printf("Name\t\t:%s\n",std.name);
        printf("Score\t\t:%d\n",std.score);
}
int main()
{
          int N,i;
          struct Student stu60[n];
          printf("Enter the number of student :");
          scanf("%d",&N);
          inputStudent(stu60,N);
          printf("=========Student=========\n");
          for (i=0;i<N;i++)
                    {
                    printStudent(stu60[i]);
                    }
    return 0;
}
