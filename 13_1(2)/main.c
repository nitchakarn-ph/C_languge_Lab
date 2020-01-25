#include <stdio.h>
#include <stdlib.h>
#define n 100
struct Student
{
    int id;
    char name[100];
    int score;
};
int main()
{
    int N;
    char con;
    int searchStd;
    printf("Enter the number of students :");
    scanf("%d",&N);
    struct Student Std[n];
    inputStudent(Std,N);
    printStudent(Std,N);
    printf("========Student search=============\n");
    do{
    printf("Enter Student ID : ");
    scanf("%d",&searchStd);
    search(searchStd,Std,N);
    printf("Do you want to con?(y/n) :");
    scanf("%*c%c",&con);
    }while ((con=='y')|| (con=='Y'));
    return 0;
}
void printStudent(struct Student Std[n],int N)
{
    int i=0;
    for (i=0;i<N;i++){
    printf("----------No.%d------------------\n",i+1);
    printf("Student ID : %d\n",Std[i].id);
    printf("Name       : %s\n",Std[i].name);
    printf("Score      : %d\n",Std[i].score);

    }
}
void inputStudent (struct Student pstds[n],int N)
{
    int i=0;
     for (i=0;i<N;i++)
    {
        printf("No. %d\t",i+1);
        printf("Student ID : ");
        scanf("%d",&pstds[i].id);
        printf("\t\tName : ");
        scanf("%s",pstds[i].name);
        printf("\t\tScore : ");
        scanf("%d",&pstds[i].score);

    }
}
void search(int search_id,struct Student pstds[n],int N)
{
   int i=0;
   for (i=0;i<N;i++)
   {

        if (pstds[i].id == search_id)
        {
         printf("*** Found student ***\n");
         printf("----------No.%d------------------\n",i+1);
         printf("Student ID : %d\n",pstds[i].id);
         printf("Name       : %s\n",pstds[i].name);
         printf("Score      : %d\n",pstds[i].score);

        }else { printf("!!! Student not found !!!!\n");}


   }


 //printf("!!! Student not found !!!!\n");
}
