#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int N,i=0;
    int max=0,min;
    float sum=0;
    float avg;
    //float sd;
    float sum1=0;
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

        sum = sum+inp[i];
        avg = sum/N;

        sum1 = sum1+((avg - inp[i])*(avg - inp[i]));

        printf("%.2f  + ((%.2f - %d[%d]) * (%.2f - %d[%d]))= %.2f\n",sum1,avg,inp,i,avg,inp,i,sum1);


        //sd = pow(inp[i]-avg,2);
        //printf("%d   %.2f\n",i,sd);

    }
    //printf("%.2f\n",sum1);
    printf("Maximum score is %d\n",max);
    printf("Minimum score is %d\n",min);
    printf("Sum is %f\n",sum);
    printf("Average of score is %.2f\n",avg);



    return 0;
}
