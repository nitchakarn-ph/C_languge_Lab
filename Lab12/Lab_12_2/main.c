#include <stdio.h>
#include <stdlib.h>
#define row 20
#define col 20
void InputMatrix(int Metrix[][col], int n,int m, char NameMet)
{
          int i=0,j=0;
       printf("Input %c\n",NameMet);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("A[%d][%d]",i,j);
            scanf("\n%d",&Metrix[i][j]);
        }
        printf("\n");
    }
}
void MultiplyMatrix(int C[][col],int A[][col],int B[][col],int nA,int mB,int nC)
{
          int i,j,k,sum=0;
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
}
void printMatrix(int Metrix[][col],int nrow,int ncol,char NameMet)
{         int i,j;

      printf("---------%c---------\n",NameMet);
    for(i=0;i<nrow;i++)
    {
        for(j=0;j<ncol;j++)
        {
            printf ("%d\t",Metrix[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int nA,mA;
    int A[row][col];
    int nB,mB;
    int B[row][col];
    int nC;
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

          InputMatrix(A,nA,mA,'A');

          do
              {
                 printf("Row of Matrix B ");
                 scanf("%d",&nB);
              }   while(nB<=0||nB>20);
          do
              {
                 printf("Col of Matrix B ");
                 scanf("%d",&mB);
              }while(mB<=0||mB>20);

          InputMatrix(B,nB,mB,'B');
          printMatrix(A,nA,mA,'A');
          printMatrix(B,nB,mB,'B');
          nC=nB;
          MultiplyMatrix(C,A,B,nA,mB,nC);
          printMatrix(C,nA,mB,'C');
      return 0;
}


