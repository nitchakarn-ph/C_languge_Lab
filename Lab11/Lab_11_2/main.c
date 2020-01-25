#include <stdio.h>
#include <stdlib.h>

void copy (int R,int C,int A[100][100],int B[100][100])
{
    int i,j;
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            B[i][j]=A[i][j];
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void trp (int R,int C,int A[100][100])
{
     int  get,i,j;

          for(i=0;i<C;i++)
          {
                    for(j=0;j<R;j++)
                    {
                            printf("%d ",A[j][i]);
                    }
        printf("\n");
        } printf("\n");
}

int main ()
{
    int R,C,i=0,j=0; // R = rows ,C = colums
    do {
              printf("Eneter the number of rows:");
              scanf("%d",&R);
    }while (R>100||R<=0);
     do {
              printf("Eneter the number of colum:");
              scanf("%d",&C);
    }while (C>100||C<=0);
    printf("Enter each a element of the input matrix:\n");
    int A[100][100],B[100][100];
    for (i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
          printf("x[%d][%d] =",i,j);
          scanf("%d",&A[i][j]);
        }
    }
    printf("Source matrix\n");
    for (i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
          printf("%d ",A[i][j]);

        }
        printf("\n");
    }

    printf("Destination matrix after coppying\n");
    copy(R,C,A,B);
    printf("transpose matrix of x\n");
    trp(R,C,A);


        return 0;
}
