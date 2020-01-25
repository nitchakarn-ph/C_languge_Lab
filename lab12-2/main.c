#include <stdio.h>
#include <stdlib.h>
void InputMatrix(int row,int col,int A[row][col])
{
    int i=0,j=0;
   for(i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]) ;
        }
        printf("\n");
    }

}
void MultiplyMatrix (int row,int col,int rowB,int L,int rowC,int colC,int A[row][col],int B[rowB][L],int C[rowC][colC])

{
       int i=0,j=0,k=0;
        for (i=0;i<rowC;i++)
        {
             for (j=0;j<colC;j++)
            {
                int sum=0;
                for (k=0;k<row;k++)
                {
                    sum+=A[i][k]*B[k][j];
                }
                C[i][j]=sum;
            }

        }
}
void printMatrix(int row ,int col,int A[row][col])
{
    int i=0,j=0;
     printf("-----------A--------------\n");
     for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
           printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int i=0,j=0;
    int row,col;
    int rowB,colB;
     int rowC,colC;
    //int a;
    printf("Input RowA :");
    scanf("%d",&row);
    printf("Input colA :");
    scanf("%d",&col);
    int A[row][col];
    printf("Input A\n");
   InputMatrix(row,col,A);

    printf("Input RowB :");
    scanf("%d",&rowB);
    printf("Input colB :");
    scanf("%d",&colB);
    int B[rowB][colB];
    printf("Input A\n");
    for(i=0;i<rowB;i++)
    {
        for (j=0;j<colB;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]) ;
        }
         printf("\n");
    }
   printMatrix(row,col,A);
    printf("-----------B--------------\n");
    for (i=0;i<rowB;i++)
    {
        for (j=0;j<colB;j++)
        {
           printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
  /*row*/ if (row>rowB)
        {
            rowC=rowB;
        }
    else
    {
        rowC=row;
    }
    if (col>colB)
    {
        colC=colB;
    }
    else
    {
        colC=col;
    }
     int C[row][colC];
    MultiplyMatrix(row,col,rowB,colB,rowC,colB,A,B,C);
         printf("-----------C--------------\n");
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
