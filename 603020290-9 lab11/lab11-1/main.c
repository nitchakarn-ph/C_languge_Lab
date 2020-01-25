#include <stdio.h>
#include <stdlib.h>
#define sizecol 100
void   copymatrix (int m,int n,int matrixcopy[][sizecol],int matrix[][sizecol]);
void printMatrix(int Matrix[][sizecol],int n,int m);
int main()
{
    int m,n;
    int i=0,j=0;
    do {
    printf ("Enter number of row :");
     scanf("%d",&n);


    }while (n<0);
    do {
     printf ("Enter number of columns :");
    scanf("%d",&m);
    }while (m>100);
    int matrix[n][sizecol];
    int matrixcopy[n][sizecol];

    printf ("Enter each of the input matrix:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf ("x[%d][%d]=",i,j);
            scanf("%d",&matrix[i][j]);
        }
        //printf ("\n");
    }
    printf ("Source matrix\n");
    printMatrix(matrix,n,m);
    printf ("Destination matrix after copying\n");
    copymatrix(m,n,matrixcopy,matrix);
    printMatrix(matrixcopy,n,m);
    return 0;
}
void  copymatrix (int m,int n,int matrixcopy[][sizecol],int matrix[][sizecol])
{

    int i=0,j=0;
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            matrixcopy[i][j] = matrix[i][j];
        }
        printf ("\n");
    }
    //printf ("%d",matrixcopy[i][j]);


}
void printMatrix(int Matrix[][sizecol],int n,int m)
{

    int i=0,j=0;
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf ("%d\t",Matrix[i][j]);
        }
        printf ("\n");
    }


}
