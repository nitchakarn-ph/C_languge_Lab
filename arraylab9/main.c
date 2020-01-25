#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i = 0;
    int sum =0;
    printf("Enter the size of array (A and B):");
    scanf("%d",&n);
    int numA[n];
    int numB[n];
    printf("Enter element of an array \"A\" :\n");
    for (i=0;i<n;i++)
    {
        printf("A[%d] = ",i);
        scanf("%d",&numA[i]);
    }
     printf("Enter element of an array \"B\" :\n");
    for (i=0;i<n;i++)
    {
        printf("B[%d] = ",i);
        scanf("%d",&numB[i]);
    }
    printf("A + B is\n");
    for (i=0;i<n;i++){
        sum = numA[i]+numB[i];
        printf("A[%d] + B[%d] = %d\n",i,i,sum);
    }

    return 0;
}
