#include <stdio.h>
#include <stdlib.h>

int main()
{
    int B0,B1,B2,B3,B4,B5;

    int dec_m ,oct1,oct2;

    printf ("Enter Binary number (6 digits):");
    scanf ("%d %d %d %d %d %d",&B0,&B1,&B2,&B3,&B4,&B5);

    printf("Binary Number = %d%d%d%d%d%d\n ",B0,B1,B2,B3,B4,B5);

    dec_m = (B0*32)+(B1*16)+(B2*8)+(B3*4)+(B4*2)+(B5*1);
    printf ("Decimal Number = %d\n",dec_m);

    oct1 = (B0*4)+(B1*2)+(B2*1);
    oct2 = (B3*4)+(B4*2)+(B5*1);
    printf("Octal Number = %d%d\n",oct1,oct2);





    return 0;
}
