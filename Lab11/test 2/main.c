#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nrow,ncol;

    printf("Enter number of rows:");
    scanf("%d",&nrow);
    printf("Enter number of columns:");
    scanf("%d",&ncol);

    printf("Enter each element of the matrix A:\n");

    int i=0,j=0,a[100][100];

    for(i=0;i<nrow;i++)
    {
        for(j=0;j<ncol;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter each element of the matrix B:\n");

    int b[100][100];

    for(i=0;i<nrow;i++)
    {
        for(j=0;j<ncol;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("matrix A:\n");
    for(i=0;i<nrow;i++)
    {
        for(j=0;j<ncol;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("matrix B:\n");
     for(i=0;i<nrow;i++)
    {
        for(j=0;j<ncol;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    int c[100][100]={0};
    printf("Column dot product output:\n");
    dotproduct(c,a,b,3,3);
    printf("\n");
    printf("Row dot product output:\n");
    int d[100][100]={0};
    dotproductbyrow(d,a,b,3,3);

    return 0;
}
void dotproduct(int c[100][100],
                int a[100][100],
                int b[100][100],int nrow,int ncol)
{
    int i,j;
    for(j=0;j<nrow;j++)
    {
        for(i=0;i<ncol;i++)
        {
            c[i][j]= a[i][j]*b[i][j];
            //printf("c[%d][%d]=%d\n",i,j,c[i][j]);
            //printf("\n");
        }
    }
    for(j=0;j<nrow;j++)
    {
        for(i=0;i<ncol;i++)
        {
            c[i][j]=c[i][j]+c[i+1][j]+c[i+2][j];
            //printf("c[%d][%d]=%d\n",i,j,c[i][j]);
        }
    }
    for(j=0;j<nrow;j++)
    {
        i=0;
        printf("%d ",c[i][j]);
    }
}

void dotproductbyrow(int d[100][100],
                     int a[100][100],
                     int b[100][100],int nrow,int ncol)
{
    int i,j;
    for(i=0;i<nrow;i++)
    {
        for(j=0;j<ncol;j++)
        {
            d[i][j]= a[i][j]*b[i][j];
            //printf("d[%d][%d]=%d\n",i,j,d[i][j]);
            //printf("\n");
        }
    }
    for(i=0;i<nrow;i++)
    {
        for(j=0;j<ncol;j++)
        {
            d[i][j]=d[i][j]+d[i][j+1]+d[i][j+2];
            //printf("d[%d][%d]=%d\n",i,j,d[i][j]);
        }
    }
    for(i=0;i<nrow;i++)
    {
        j=0;
        printf("%d ",d[i][j]);
        printf("\n");
    }
}
