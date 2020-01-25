#include <stdio.h>
#include <stdlib.h>
void matrixcopy(int row,int column,int xcpy[row][column],int x[row][column])
{
    int i=0,j=0;
   for (i=0;i<row;i++)
    {
        for (j=0;j<column;j++)
        {
            xcpy[i][j] = x[i][j];
            printf("%d\t",xcpy[i][j]);
        }
       printf("\n");
    }
}
void transpose (int row,int column,int x[row][column],int xtra[column][row])
{
    int i=0,j=0;
     for (j=0;j<column;j++)
    {
        for (i=0;i<row;i++)
        {
            printf("%d\t",x[i][j]);
            //scanf("%d",&x[i][j]);
        }
       printf("\n");
    }
}
int main()
{
    int row;
    int column;

    printf("Enter number of row : ");
    scanf("%d",&row);
    if (row<0)
    {
        printf("Enter number of row : ");
        scanf("%d",&row);
    }

    printf("Enter number of columns : ");
    scanf("%d",&column);
    if (column>100 || column<0)
    {
        printf("Enter number of columns : ");
        scanf("%d",&column);
    }
    int x[row][column];
    int xcpy[row][column];
    int xtra[column][row];
    int i=0,j=0;
    printf("Enter each element of the input matrix :\n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<column;j++)
        {
            printf("x[%d][%d] = ",i,j);
            scanf("%d",&x[i][j]);
        }
    }
    printf("Source matrix\n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<column;j++)
        {
            printf("%d\t",x[i][j]);
            //scanf("%d",&x[i][j]);
        }
       printf("\n");
    }
     printf("Destination matrix after copying\n");
    matrixcopy(row,column,xcpy,x);
    printf("Transpose matrix of x\n");
    transpose(row,column,x,xtra);
    return 0;
}

