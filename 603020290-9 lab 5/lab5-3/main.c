#include <stdio.h>
#include <stdlib.h>

int main()
{

    char B0,B1,B2,B3,B4,B5;
    int A,B,C,D,E;
    printf ("Enter a number : ");
    scanf ("%c%c%c%c%c%c",&B0,&B1,&B2,&B3,&B4,&B5);

    A = B0 +16;
    B = B1 +16;
    C = B2 +16;
    D = B3 +16;
    E = B4 +16;

    printf("Output string : %c%c%c%c%c\n",A,B,C,D,E);

    printf ("Enter a number : ");
    scanf ("%c%c%c%c%c%c",&B0,&B1,&B2,&B3,&B4,&B5);
    printf("Output string : %c%c%c%c%c\n",A,B,C,B,A);

    return 0;
}
