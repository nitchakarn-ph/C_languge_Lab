#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N;
    int i=0,max=0,min=0;
    float avg;
    int sum=0,j;
    int sum_sd=0;
    float sd=0;
    printf("Enter number of score:");
    scanf("%d",&N);
    int inp[N];
     //เวลาที่มีการประกาศการรับค่าของขนาด Array ควรจะเอาประกาศไว้หลังจากการรับค่า เพราะมันจะได้ทราบขนาดของ Array อย่าแน่ชัด
    for (i=0;i<N;i++){
        printf("Enter the %d-th score:",i);
        scanf("%d",&inp[i]);
        if(i==0){
            max = inp[i];
            min = inp[i];
        }
        if(max<inp[i]){
            max = inp[i];
        }
        if(min>max){
            min = inp[i];
        }
        sum = sum + inp[i];

    }
        avg = sum/N;
        float sum_sd2=0;
        float sd1=0;
        for (i=0;i<N;i++){
        sum_sd = inp[i]-avg;
        int sum_sd1 = pow(sum_sd,2);
        sum_sd2 = sum_sd2+sum_sd1;
        sd = sum_sd2/(N-1);

       // printf("%d  %d\n",i,sum_sd2);
        }
        sd1 = sqrt(sd);
        //printf("%d  %.2f\n",i,sum_sd2);
        //sd = sum_sd2/N-1;
        //printf("%d %.2f\n",i,sd1);

       // printf("%d\n",sum_sd);

        //sd = sqrt(sum_sd)/N-1;
        printf("Maximum score is %d\n",max);
        printf("Minimum score is %d\n",min);
        printf("Average of score is %.2f\n",avg);
        printf("S.D. is %.2f",sd1);

    return 0;
}
