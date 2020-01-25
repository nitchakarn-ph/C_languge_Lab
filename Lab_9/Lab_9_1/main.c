#include <stdio.h>
#include <stdlib.h>

int main()
{
   int N,i=0;


   printf("Enter the size of array (A and B):");
   scanf("%d",&N);



printf("Enter elemant of an array \"A\" : \n");
   int A[N];
   for (i=0;i<N;i++)
   {
       printf("A[%d] = ",i);
       scanf("%d",&A[i]);
   }
printf("Enter elemant of an array \"B\" : \n");

   int B[N];
   for (i=0;i<N;i++)
   {
         printf("B[%d] = ",i);
       scanf("%d",&B[i]);
   }


printf("A + B is\n");


  int sum[N];
   for (i=0;i<N;i++)
   {
       sum[i] = A[i]+B[i];

   }

   for (i=0;i<N;i++)
   {
    printf("A[%d] + B[%d] = %d\n",i,i,sum[i]);

   }





    return 0;
}
