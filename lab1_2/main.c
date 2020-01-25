#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,m,x1,y1;

    printf("The coordinate is ");
    scanf("%g",&x);
    printf("The coordinate is ");
    scanf("%g",&y);
    printf("The coordinate is ");
    scanf("%g",&x1);
    printf("The coordinate is ");
    scanf("%g",&y1);
    m = x/y;
    printf("The slop is %g\n",m);
    printf("The coordinate 1 is (%g, %g)\n",x,y);
    printf("The coordinate 2 is (%g, %g)\n",x1,y1);
    return 0;
}
