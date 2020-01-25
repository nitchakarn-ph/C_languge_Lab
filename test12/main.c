#include <stdio.h>
#include <stdlib.h>
#define Row 20
#define Col 20
void printMatrix (int M[][Col],int nrow,int ncol);
//fucntional prototype of printMatrix
// implementation of print Marix
int sumMatrix (int M[][Col],int nrow,int ncol);
int sumByCol (int C[],int M[][Col],int nrow,int ncol);
int sunDiagonal (int M[][Col],int nrow,int ncol);
int main()
{

    int A[Row][Col]={{1,2,3},{4,5,6},{7,8,9} };
    int B[Row][Col]={{1,0,3},{1,2,1},{0,1,5} };

    int nrow =2;
    int ncol =3;
    int result;
    int i=0,j=0;
    //i=row j=col
    result = sumMatrix(A,3,3);
    printf ("result of A = %d\n",result);
    printf("-------------A-------------\n");
    printMatrix(A,3,3);
    printf("-------------B-------------\n");
    printMatrix(B,3,3);
    result = sumMatrix(A,3,2);
    printf ("result of B = %d\n",result);
    for (j=0;j<nrow;j++)
    {
        for (i=0;i<ncol;i++)
        {
            //if (i==j) //¨Ð»ÃÔé¹á¹Ç·ÐáÂ§
            printf("%d",B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
int sumMatrix (int M[][Col],int nrow,int ncol)
{
    int i=0,j=0;
    int sum=0;
    for (i=0;i<nrow;i++)
    {
        for (j=0;j<ncol;j++)
        {

            sum += M[i][j];
        }
        printf("\n");
    }
    return sum;
}
void printMatrix (int M[][Col],int nrow,int ncol)
{
        int i=0,j=0;
       for (j=0;j<nrow;j++)
    {
        for (i=0;i<ncol;i++)
        {
            //if (i==j) //¨Ð»ÃÔé¹á¹Ç·ÐáÂ§
            printf("%d\t",M[i][j]);
        }
        printf("\n");
    }

}
