#include <stdio.h>
#include <stdlib.h>
void DotProduct (int n,int m,int A[][m],int B[][m],int C[][m]);
void printMatrixA(int n,int m,int A[][m]);
void printMatrixB(int n,int m,int B[][m]);
void DotProductByrow(int n,int m,int A[][m],int B[][m],int Dotrow[][m]);
int main()
{
    int n,m;
    printf("Enter number of row:");
    scanf("%d",&n);
    printf("Enter number of columns:");
    scanf("%d",&m);
    int i=0,j=0;
    int A[n][m];
    int B[n][m];
    int C[n][m];
    int Dotrow[n][m];
    //int sum[n];
    printf("Enter each element of the matrix A:\n");
    for (i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);//matrix A
        }
        //printf("\n");
    }
    printf("Enter each element of the matrix B:\n");
    for (i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);//matrix B
        }
        printf("\n");
    }
    printf("matrix A:\n");
    printMatrixA(n,m,A);
    printf("matrix B:\n");
    printMatrixB(n,m,B);
    printf("Column dot product output:\n");
    DotProduct(n,m,A,B,C);
    printf("Row dot product output:\n");
    DotProductByrow(n,m,A,B,Dotrow);
    return 0;
}
void DotProduct (int n,int m,int A[][m],int B[][m],int C[][m])
{
    int i=0,j=0;
    for (i=0; i<n; i++)
    {
        int sum=0;
        for(j=0; j<m; j++)
        {
            C[i][j]= A[i][j]*B[i][j];
            sum += C[i][j];//รอบที่
            printf("%d[%d][%d]\t",C[i][j],i,j);

        }
        printf("%d [%d]\n",sum,i);
    }

}
void printMatrixA(int n,int m,int A[][m])
{
    int i=0,j=0;
     for (i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

}
void printMatrixB(int n,int m,int B[][m])
{
     int i=0,j=0;
 for (i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }

}
void DotProductByrow(int n,int m,int A[][m],int B[][m],int Dotrow[][m])
{
   int i=0,j=0;
    for (i=0; i<n; i++)
    {
        int sumrow=0;
        for(j=0; j<m; j++)
        {
            Dotrow[i][j]= A[i][j]*B[i][j];
            sumrow +=Dotrow[i][j];//รอบที่
            printf("%d[%d][%d]\t", Dotrow[i][j],i,j);

        }
        printf("%d [%d]\n",sumrow,i);
    }

}
