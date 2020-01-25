#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float A;
    float B;
    char Operator = 0;
    float P;
    char cont = 'y';

    do {
    printf ("Input Decimal Number1 :");
    scanf ("%f",&A);

    printf ("Input Decimal Number2 :");
    scanf ("%f%*c",&B); //%*c เปนการเขียนเพื่อข้้ามบรรทัดและจะแสดงก้ต่อเมื่อเรากดเอนเตอร์เท่านั้น

    printf ("Press operator do you want to Process (+,-,*,/,^): ");
    scanf ("%c",&Operator);


    if (Operator == '+') {
        P = A+B;
        printf ("Result %g %c %g = %g",A,Operator,B,P);

        }
    if (Operator == '-') {
        P = A-B;
        printf ("Result %g %c %g = %g",A,Operator,B,P);

        }
    if (Operator == '*') {
        P = A*B;
        printf ("Result %g %c %g = %g",A,Operator,B,P);

        }
    if (Operator == '/') {
        P = A/B;
        printf ("Result %g %c %g = %g",A,Operator,B,P);

        }
    if (Operator == '^') {
        P = pow(A,B);
        printf ("Result %g %c %g = %g",A,Operator,B,P);

        }
    printf("\n Do you want to continue? (y/n)");
    scanf("\n%c",&cont);
    //printf("cont=%c",cont);
    }while ((cont == 'Y')||(cont == 'y'));
    return 0;
}
