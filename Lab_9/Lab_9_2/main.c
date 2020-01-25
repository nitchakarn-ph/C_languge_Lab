#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   int N,i=0,max=0,min=0,sum=0;
   double aver=0,SD=0;

   printf("Enter number of score:");
   scanf("%d",&N);


    double score[N];
                for (i=0;i<N;i++)
                       {
                         printf("Enter the %d-th score:",i);
                         scanf("%Lf",&score[i]);

                       }
    max=score[0];
    min=score[0];

                for(i=0;i<N;i++)
                {
                            if (max<score[i])
                                {
                                    max = score[i];
                                }
                            else if (min>score[i])
                                {
                                  min = score[i];

                                }

                    sum+=score[i];

                }

    aver = (float)sum/N;

            for (i=0;i<N;i++)
               {

                SD +=  pow((score[i]- aver),2);

               }
//printf("%.2Lf",SD);



    SD = SD /(N-1);
    SD = sqrt(SD);

    printf("Maximum score is %d\n",max);
    printf("Minimum score is %d\n",min);
    printf("Average of score is %.2Lf\n",aver);
    printf("S.D. is %.2Lf\n",SD);


    return 0;
}
