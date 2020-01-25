#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,k=0;
    int row,col;
    int rowB,colB;
     int rowC,colC;

     do{
     printf("Input RowA :");
    scanf("%d",&row);
    printf("Input colA :");
    scanf("%d",&col);
     }
    while (row>20 && col >20);
    int A[row][col];
    printf("Input A\n");

    for(i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]) ;
        }
        printf("\n");
    }
    do{
    printf("Input RowB :");
    scanf("%d",&rowB);
    printf("Input colB :");
    scanf("%d",&colB);
    }while (rowB>20 && col > 20);
    int B[rowB][colB];
    printf("Input B\n");
    for(i=0;i<rowB;i++)
    {
        for (j=0;j<colB;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]) ;
        }
         printf("\n");
    }
    printf("-----------A--------------\n");
     for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
           printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
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
