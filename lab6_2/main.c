#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char B0,B1,B2,B3,B4,B5,B6,B7;
    char dec_m;
    char oct1,oct2;


    printf ("Input Binary number (8 digits):");
    scanf ("%c%c%c%c%c%c%c%c",&B0,&B1,&B2,&B3,&B4,&B5,&B6,&B7);

    printf("Binary number is %c%c%c%c%c%c%c%c ",B0,B1,B2,B3,B4,B5,B6,B7);

    dec_m = (B0*32)+(B1*16)+(B2*8)+(B3*4)+(B4*2)+(B5*1);
    printf ("Decimal Number = %d\n",dec_m);

    oct1 = (B0*8)+(B1*4)+(B2*2)+(B3*1);
    oct2 = (B3*4)+(B4*2)+(B5*1)+(B7*1);
    printf("Hexadecimal= %c%c\n",oct1,oct2);





    return 0;
}
