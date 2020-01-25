#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i=0,sum=0;
    printf("Enter the size of array (A and B):");
    scanf("%d",&N);
    printf("Enter element of an array \"A\":\n");
    int a[N],b[N];
    for (i=0;i<N;i++)
    {
        //printf("Enter element of an array \"A\":\n");
        printf("A[%d] = ",i);
        scanf("%d",&a[i]);

    }
    printf("Enter element of an array \"B\":\n");
    for (i=0;i<N;i++)
    {
        printf("B[%d] = ",i);
        scanf("%d",&b[i]);

    }
    printf("A + B is \n");
    for (i=0;i<N;i++)
    {
        sum = a[i]+b[i];
       // printf("A + B is \n");
        printf("\nA[%d] + B[%d] = %d",i,i,sum);

    }

    return 0;
}
