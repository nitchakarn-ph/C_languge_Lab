#include <stdio.h>
#include <stdlib.h>
void printMatrixA (int row,int col,int matrixA[][100]);
void printMatrixAB (int row,int col,int matrixB[][100]);
void scanfMatrixA (int row,int col,int matrixA[][100]);
void scanfMatrixB (int row,int col,int matrixB[][100]);
void DotproductCol (int row,int col,int matrixA[][100],int matrixB[][100],int dotmatrixA [100]);
void DotproductRow (int row,int col,int matrixA[][100],int matrixB[][100],int dotmatrixR[100]);
int main()
{
    int matrixA[100][100],matrixB[100][100];
    int row,col;
    int dotmatrixA[100];
    int dotmatrixR[100];
    printf("Enter number of rows:");
    scanf("%d",&row);
    printf("Enter number of columns:");
    scanf("%d",&col);
    printf("Enter each element of the matrix A:\n");
    scanfMatrixA (row,col,matrixA);
     printf("Enter each element of the matrix B:\n");
    scanfMatrixB (row,col,matrixB);
    printf("matrix A:\n");
    printMatrixA (row,col,matrixA);
     printf("matrix B:\n");
    printMatrixAB (row,col,matrixB);
    printf("Column dot product output:\n");
    DotproductCol (row,col,matrixA,matrixB,dotmatrixA);
    printf("\nRow dot product output:\n");
    DotproductRow (row,col,matrixA,matrixB,dotmatrixR);
    return 0;
}
void printMatrixA (int row,int col,int matrixA[][100])
{
    int i=0,j=0;

     for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
           printf("%d\t",matrixA[i][j]);

        }
        printf("\n");
    }
}
void printMatrixAB (int row,int col,int matrixB[][100])
{
    int i=0,j=0;
     for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
           printf("%d\t",matrixB[i][j]);

        }
        printf("\n");
    }
}
void scanfMatrixA (int row,int col,int matrixA[][100])
{
    int i=0,j=0;
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
           printf("A[%d][%d]=",i,j);
           scanf("%d",&matrixA[i][j]);
        }
    }
}
void scanfMatrixB (int row,int col,int matrixB[][100])
{
     int i=0,j=0;
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
           printf("A[%d][%d]=",i,j);
           scanf("%d",&matrixB[i][j]);
        }
    }

}
void DotproductCol (int row,int col,int matrixA[][100],int matrixB[][100],int dotmatrixA[100])
{
    int i=0,j=0;
    //int sum=0;
   // int dotmatrixA=0;
    for (i=0;i<row;i++)
    {
         //int sum=0;
        for (j=0;j<col;j++)
        {

           dotmatrixA[i]+=(matrixA[j][i]*matrixB[j][i]);
           // printf("%d [%d][%d]\t",dotmatrixA[i][j],i,j);
        }
    }
     for (i=0;i<col;i++){
             printf("%d\t",dotmatrixA[i]);

    }



}
void DotproductRow (int row,int col,int matrixA[][100],int matrixB[][100],int dotmatrixR[100])
{
    int i=0,j=0;
    //int sum=0;
   // int dotmatrixA=0;
    for (i=0;i<row;i++)
    {
         //int sum=0;
        for (j=0;j<col;j++)
        {

           dotmatrixR[i]+=(matrixA[i][j]*matrixB[i][j]);

           // printf("%d [%d][%d]\t",dotmatrixA[i][j],i,j);
        }
    }
     for (i=0;i<col;i++){
             printf("%d\n",dotmatrixR[i]);
    }



}

