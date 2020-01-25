#include <stdio.h>
#include <stdlib.h>

int main()
{
    int B0,B1,B2,B3,B4,B5,B6,B7;

    float dec_m;

    printf ("Enter Binary floating point (bbbb.ffff):");
    scanf ("%d %d %d %d.%d %d %d %d",&B0,&B1,&B2,&B3,&B4,&B5,&B6,&B7);

    printf("Binary = %d%d%d%d.%d%d%d%d\n ",B0,B1,B2,B3,B4,B5,B6,B7);

    dec_m = (B0*8)+(B1*4)+(B2*2)+(B3*1)+(B4*0.5)+(B5*0.25)+(B6*0.125)+(B7*0.0625);
    printf ("Decimal  = %f\n",dec_m);



    return 0;
}
