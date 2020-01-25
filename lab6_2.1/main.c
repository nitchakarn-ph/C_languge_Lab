#include <stdio.h>
#include <stdlib.h>

int main()
{
    char N1,N2,N3,N4,N5,N6,N7,N8;
    char Hex1,Hex2;
    char H1,H2;

    printf("Input Binary Number (8 digits):");
    scanf("%c%c%c%c%c%c%c%c",&N1,&N2,&N3,&N4,&N5,&N6,&N7,&N8);
    printf("Binary Number is %c%c%c%c%c%c%c%c\n",N1,N2,N3,N4,N5,N6,N7,N8);
    Hex1 = ((N1-48)*8)+((N2-48)*4)+((N3-48)*2)+((N4-48)*1);
    Hex2 = ((N5-48)*8)+((N6-48)*4)+((N7-48)*2)+((N8-48)*1);

    if (Hex1 <= 9)
        {
            H1 = Hex1 + 48;
        }
    if (Hex2 >= 10)
        {
            H2 = Hex2 + 55;
        }
    if (Hex1 >= 10)
        {
            H1 = Hex1 + 55;
        }
    if (Hex2 <= 9)
        {
            H2 = Hex2 + 48;
        }

    printf("Hexadecimal is %c%c",H1,H2);



    return 0;
}



