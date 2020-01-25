#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N;
    printf("Enter the number of student :");
    scanf("%d",&N);
    char std[N][20];
    int score[N];
    char grade[N];
    int id[N];
    int i=0;
    for (i=0;i<N;i++){
        printf("Student #%d",i+1);
        printf("\tName :");
        scanf("%s",std[i]);
        printf("\t\tScore :");
        scanf("%d",&score[i]);
        id[i] = i+1;
        if (score[i] >= 80){
            grade[i] = 'A';
        }else if (score[i] >=70){
              grade[i] = 'B';
            }else if (score[i] >= 60){

               grade[i] = 'C';
            }else if (score[i] >= 50 ){

                grade[i] = 'D';
            }else if (score[i] < 50){

                grade[i] = 'F';
            }

    }
    /*for (i=0;i<N;i++){
       printf("%03d",id[i]);

       printf("\t%s",std[i]);
       printf("\t%d",score[i]);
       printf("\t%c\n",grade[i]);


    }*/
    int swflag=1;
    int tmpscore;//score
    char tmpname[20];
    char tmpgd;
    int tmpid;

    while(swflag == 1){
        swflag = 0;
        for (i=0;i<N-1;i++){
         if (score[i]<score[i+1]){
            tmpscore = score[i];
            score[i]= score[i+1];
            score[i+1] = tmpscore;

            tmpid = id[i];
            id[i] = id[i+1];
            id[i+1]= tmpid;

            strcpy(tmpname,std[i]);
            strcpy(std[i],std[i+1]);
            strcpy (std[i+1],tmpname);

            tmpgd = grade[i];
            grade[i] = grade[i+1];
            grade[i+1]=tmpgd;
            swflag = 1 ;
         }

      }
    }
    printf("-------------------------------\n");
    printf("No\tID\tname\tScore\tGrade\n");
    printf("-------------------------------\n");

    for (i=0;i<N;i++){
        printf("%d\t",i+1);
       printf("%03d",id[i]);//ที่เราจะต้องมีกการเปลี่ยน id ให้มาเป็นอาเรย์ เพราะมันจะได้ไม่ไปซ้ำกับตัว No.
       printf("\t%s",std[i]);
       printf("\t%d",score[i]);
       printf("\t%c\n",grade[i]);


    }
    return 0;
}
