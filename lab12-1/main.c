#include <stdio.h>
#include <stdlib.h>
//#define row 20
//#define col 20
void printMatrixA (int row,int col,int matrixA[][col]);
void printMatrixB (int rowB,int colB,int matrixB[][colB]);
void Dotmatrix (int row,int col,int rowB,int colB,int matrixA[][col],int matrixB[][colB],int dotmatrix[colB][row],int dotmatrix1[][100]);
int main()
{
    int row,col;
    int i=0,j=0;

    printf("Row of Matrix A :");
    scanf("%d",&row);
    printf("Col of Matrix A :");
    scanf("%d",&col);
    //if (row < 20 && col < 20){}
    int matrixA[row][col];
    printf("Input A\n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&matrixA[i][j]);
        }
        printf("\n");
    }//row of matrixA = col of matrixB
    int rowB,colB;

    printf("Row of Matrix B :");
    scanf("%d",&rowB);
    printf("Col of Matrix B :");
    scanf("%d",&colB);
    //if (row < 20 && col < 20){}
    int matrixB[rowB][colB];
    printf("Input B\n");
    for (i=0;i<rowB;i++)
    {
        for (j=0;j<colB;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&matrixB[i][j]);
        }
        printf("\n");
    }
    printf("----------A---------\n");
    printMatrixA (row,col,matrixA);
    printf("----------B---------\n");
    printMatrixB (rowB,colB,matrixB);
     printf("----------C---------\n");
     int dotmatrix[colB][row];
      int dotmatrix1[colB][row];
     Dotmatrix(row,col,rowB,colB,matrixA,matrixB,dotmatrix,dotmatrix1);

    //colB = row of C
    //row of A = col of C
    return 0;
}
void printMatrixA (int row,int col,int matrixA[][col])
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
void printMatrixB (int rowB,int colB,int matrixB[][colB])
{
    int i=0,j=0;
    for (i=0;i<rowB;i++)
    {
        for (j=0;j<colB;j++)
        {
            printf("%d\t",matrixB[i][j]);
        }
        printf("\n");
    }
}
void Dotmatrix (int row,int col,int rowB,int colB,int matrixA[][col],int matrixB[][colB],int dotmatrix[colB][row],int dotmatrix1[][100])
{
    int i=0,j=0;
    if (col == rowB)
    {

        for (i=0;i<colB;i++)
        {
            int sum=0;
            for (j=0;j<row;j++)
            {
                //int sum=0;
                dotmatrix[0][j]=matrixA[0][j]*matrixB[j][0];
                dotmatrix1[1][j]=matrixA[1][j]*matrixB[1][0];
                //dotmatrix[i][j]=(matrixA[i][j]*matrixB[j][i]);
                sum+=dotmatrix[i][j];
                printf("%d [%d][%d]\t ",dotmatrix[i][j],i,j);
                printf("%d\n",dotmatrix1[i]]j);
            }
        printf("%d",sum);
        printf("\n");
        }


    }
}
