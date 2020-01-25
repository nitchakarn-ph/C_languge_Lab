#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("Enter the number of student :");
    scanf("%d",&N);
    char std[N][20];
    int score[N];
    int i=0;
    for (i=0;i<N;i++){
        printf("Student #%d",i+1);
        printf("\tName :");
        scanf("%s",std[i]);
        printf("\t\tScore :");
        scanf("%d",&score[i]);

    }
    printf("-------------------------------\n");
    printf("ID\tname\tScore\tGrade\n");
    printf("-------------------------------\n");

    for (i=0;i<N;i++){
       printf("%03d",i+1);

       printf("\t%s",std[i]);
       printf("\t%d",score[i]);
       if (score[i] >= 80){
            printf("\tA\n");
        }else if (score[i] >=70){
                printf("\tB\n");
            }else if (score[i] >= 60){

                printf("\tC\n");
            }else if (score[i] >= 50 ){

                printf("\tD\n");
            }else if (score[i] < 50){

                printf("\tF\n");
            }

    }
    return 0;
}
