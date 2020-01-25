#include <stdio.h>
#include <stdlib.h>
int R,C,i=0,j=0;
void printdotcol(int R,int C,int A[][100],int B[][100],int D[100])
{
      for (i=0;i<C;i++){
               for(j=0;j<R;j++){
                  D[i]+=(A[j][i]*B[j][i]) ;
               }
                  printf("%d ",D[i]);
          }/*
         for (i=0;i<C;i++){

         }*/
}
void printdotrow(int R,int C,int A[][100],int B[][100], int F[100])
{
      for (i=0;i<R;i++){
               for(j=0;j<C;j++){
                  F[i]+=(A[i][j]*B[i][j]) ;
               }
          }
         for (i=0;i<C;i++){

          printf("%d\n",F[i]);
         }
}
void printmatrix(int R,int C,int M[][100])
{
    for (i=0;i<R;i++){
        for(j=0;j<C;j++){
          printf("%d ",M[i][j]);

        }
        printf("\n");
    }
}
void scanmatrix(int R,int C,int P[][100])
{
    for (i=0;i<R;i++){
        for(j=0;j<C;j++){
          printf("x[%d][%d] =",i,j);
          scanf("%d",&P[i][j]);
        }
    }
}
int main ()
{
    do {
              printf("Eneter the number of rows:");
              scanf("%d",&R);
    }while (R>100||R<=0);
     do {
              printf("Eneter the number of column:");
              scanf("%d",&C);
    }while (C>100||C<=0);

    int A[100][100],B[100][100];
    printf("Enter each a element of the input matrix A:\n");
    scanmatrix(R,C,A);
    printf("Enter each a element of the input matrix B:\n");
    scanmatrix(R,C,B);
    printf("Matrix A:\n");
    printmatrix(R,C,A);
    printf("Matrix B:\n");
    printmatrix(R,C,B);
    printf("Column dot product output:\n");
    int D[100];
    printdotcol(R,C,A,B,D);
    printf("\nRows dot product output:\n");
    int F[100];
    printdotrow(R,C,A,B,F);

        return 0;
}
