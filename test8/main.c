#include <stdio.h>
#include <stdlib.h>

int main()
{

    int   i=0,N,inp;
    printf("input No. of data:");
    scanf("%d",&N);
    system("cls");
    do{
        printf("input data[%d] :",i);
        scanf("%d",&inp);
        i++;
    }while (i<N);
    /*for (i=0;i<N;i++)
    {
        printf("input data[%d] :",i);
        scanf("%d",&inp);
    }*/
    return 0;
}
