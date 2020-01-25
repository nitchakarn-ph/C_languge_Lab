#include <stdio.h>
#include <stdlib.h>
#define sizecolA 20
#define sizecolB 20
void InputmatrixA(int rowA,int colA,int A[rowA][colA])
{
    int i=0;
    int j=0;
    for (i=0;i<rowA;i++)
    {
        for (j=0;j<colA;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
}
void InputmatrixB(int rowB,int colB,int B[rowB][colB])
{
     int i=0;
        int j=0;
     for (i=0;i<rowB;i++)
    {
        for (j=0;j<colB;j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
}
void Multiplymatrix (int rowC,int colC,int rowA,int colA,int rowB ,int L ,int A[rowA][colA],int B[rowB][L],int C[rowC][colC])

{
     int i=0;
        int j=0;
        int k=0;
     for (i=0;i<rowC;i++)
    {
        for (j=0;j<colC;j++)
        {
            int sum=0;
            for (k=0;k<rowA;k++)
            {
                 sum+=(A[i][k]*B[k][j]);
            }
           C[i][j] = sum;
        }
    }
}
int main()
{
    int rowA,colA;
    int rowB,colB;
    printf("Input A\n");
    printf("Enter number of row A:");
    scanf("%d",&rowA);
    printf("Enter number of column A:");
    scanf("%d",&colA);
    int A[rowA][colA];
    int i=0;
    int j=0;
    InputmatrixA(rowA,colA,A);
    printf("Input B\n");
    printf("Enter number of row B:");
    scanf("%d",&rowB);
    printf("Enter number of column B:");
    scanf("%d",&colB);
    int B[rowB][colB];
    InputmatrixB(rowB,colB,B);
    printf("--------------------A--------------------------\n");
    for (i=0;i<rowA;i++)
    {
        for (j=0;j<colA;j++)
        {
            printf("%d\t",A[i][j]);

        }
        printf("\n");

    }
    printf("--------------------B--------------------------\n");
    for (i=0;i<rowB;i++)
    {
        for (j=0;j<colB;j++)
        {
            printf("%d\t",B[i][j]);

        }
        printf("\n");

    }
    int rowC ;
    int colC ;
    printf("--------------------C--------------------------\n");
    if (rowA>rowB)
    {
        rowC = rowB;
    }else
    {
        rowC = rowA;
    }
    if (colA>colB)
    {
        colC=colB;
    }else
    {
        colC = colB;
    }
    int C[rowC][colC];
   int k=0;
    Multiplymatrix(rowC,colB,rowA,colA,rowB,colB,A,B,C);
    for (i=0;i<rowC;i++)
    {
        for (j=0;j<colC;j++)
        {
            printf("%d\t",C[i][j]);

        }
        printf("\n");

    }
    return 0;
}
