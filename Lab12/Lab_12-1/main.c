#include <stdio.h>
#include <stdlib.h>
#define row 20
#define col 20
int main()
{   int sum=0;
    int i=0,j=0,k=0;
    int nA,mA;
    int A[row][col];
    int nB,mB;
    int B[row][col];
    int nC,mC;
    int C[row][col];

    do
    {
      printf("Row of Matrix A ");
      scanf("%d",&nA);
    }while(nA<=0||nA>20);
    do
    {
      printf("Col of Matrix A ");
      scanf("%d",&mA);
    }while(mA<=0||mA>20);

   printf("Input A \n");

    for(i=0;i<nA;i++)
    {
        for(j=0;j<mA;j++)
        {
            printf("A[%d][%d]",i,j);
            scanf("\n%d",&A[i][j]);
        }
        printf("\n");
    }

    do
    {
       printf("Row of Matrix B ");
       scanf("%d",&nB);
    }while(nB<=0||nB>20);
    do
    {
       printf("Col of Matrix B ");
       scanf("%d",&mB);
    }while(mB<=0||mB>20);

    printf("Input B \n");

    for(i=0;i<nB;i++)
    {
        for(j=0;j<mB;j++)
        {
            printf("B[%d][%d]",i,j);
            scanf("\n%d",&B[i][j]);
        }
        printf("\n");
    }
    printf("---------A---------\n");
    for(i=0;i<nA;i++)
    {
        for(j=0;j<mA;j++)
        {
            printf ("%d\t",A[i][j]);
        }
        printf("\n");
    }
    printf("---------B---------\n");
    for(i=0;i<nB;i++)
    {
        for(j=0;j<mB;j++)
        {
            printf ("%d\t",B[i][j]);
        }
        printf("\n");
    }


        nC=nB;


     for(i=0;i<nA;i++)
     {
         for(j=0;j<mB;j++)
         {

             for(k=0;k<nC;k++)
             {
                 sum += A[i][k]*B[k][j];
             }
             C[i][j] = sum;
             sum=0;
         }
     }
    printf("---------C---------\n");
    for(i=0;i<nA;i++)
    {
        for(j=0;j<mB;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }

    return 0;
}


