#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N,i=0;
    int max=0,min;
    float sum=0;
    float avg;
    //float sumAvg;
    int sum1[N];


    printf("Enter number of scores:");
    scanf("%d",&N);
    int inp[N];
    for (i=0;i<N;i++)
    {
        printf("Enter the %d-th score:",i);
        scanf("%d",&inp[i]);
        if(i==0)//check frist input number = max or min
            {
                    max=inp[i];
                    min=inp[i];
            }
        if (max<inp[i])
            {
                max=inp[i];
                //printf("Maximum score is %d\n",max);
            }
        if (min>max)
            {
                min = inp[i];
                //printf("Minimum score is %d\n",min);
            }
    }
        sum = sum+inp[i];
        avg = sum/N;
        //printf("Sum is %d\n",sum);
        for (i=0;i<N;i++){
        sum1[i] = inp[i]-avg;

        }
        //sumAvg = pow(sum1,2);


    printf("Maximum score is %d\n",max);
    printf("Minimum score is %d\n",min);
    printf("Sum is %f\n",sum);
    printf("Average of score is %.2f\n",avg);
    printf("sum1 = %d",sum1);


    return 0;
}
