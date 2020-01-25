#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    char A;
    char B0,B1,B2,B3,B4,B5,B6,B7;
    char DN1,Oct1,Oct2,Oct3,Oct,O1,O2,O3;
    char Hex1,Hex2,H1,H2;




    printf ("1. Convert Binary to Decimal  \n");
    printf ("2. Convert Binary to Octal \n");
    printf ("3. Convert Binary to Hexadecimal \n");
    printf ("4. Exit:\n");


    printf ("Choose a choice:");
    scanf ("%c%*c",&A); //%*c เปนการเขียนเพื่อข้้ามบรรทัดและจะแสดงก้ต่อเมื่อเรากดเอนเตอร์เท่านั้น

    printf ("Input Binary number (8 digits):");
    scanf ("%c%c%c%c%c%c%c%c",&B0,&B1,&B2,&B3,&B4,&B5,&B6,&B7);

    printf("Binary Number is %c%c%c%c%c%c%c%c\n",B0,B1,B2,B3,B4,B5,B6,B7);


    /*if ( A == '1'){

        DN1 = ((B0-48)*128)+((B1-48)*64)+((B2-48)*32)+((B3-48)*16)+((B4-48)*8)+((B5-48)*4)+((B6-48)*2)+((B7-48)*1);

        printf("Decimal is %d\n",DN1);
        }*/
    if ( A == '1'){

        DN1 = ((B0-48)*128)+((B1-48)*64)+((B2-48)*32)+((B3-48)*16)+((B4-48)*8)+((B5-48)*4)+((B6-48)*2)+((B7-48)*1);

        printf("Decimal is %d\n",DN1);
        }

    if (A == '2'){
        if (Oct <=7){
        Oct1 = ((B0-48)*4)+((B1-48)*2)+((B2-48)*1);
        O1 = Oct1 +48;
        }
        if (Oct <=7){
        Oct2 = ((B3-48)*2)+((B4-48)*1);
        O2 = Oct2 + 48;
        }
        if (Oct <=7){
        Oct3 = ((B5-48)*4)+((B6-48)*2)+((B7-48)*1);
        O3 = Oct3 +48;
        }
        printf("Octal is %c%c%c\n",O1,O2,O3);
        }
    if (A == '3'){
        Hex1 = ((B0-48)*8)+((B1-48)*4)+((B2-48)*2)+((B3-48)*1);
        Hex2 = ((B4-48)*8)+((B5-48)*4)+((B6-48)*2)+((B7-48)*1);
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
            printf("Hexadecimal is %c%c\n",H1,H2);
        }

    if ( A == '4'){

            printf("Error! digit must be 1 or 0",A);

            }

    return 0;
}
