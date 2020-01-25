#include <stdio.h>
#include <stdio.h>
#include <math.h>
int main()
{
    float N1,N2,sum;
    char Op=0;
    char con='y';
    do {
    printf("Input Decimal1 Number1: ");
    scanf("%f",&N1);

    printf("Input Decimal2 Number2: ");
    scanf ("%f%*c",&N2);

    printf("Press Operator do you want to Process (+,-,*,/,^) :");
    scanf("%c%*c",&Op);

    if (Op== '+'){
        sum = N1+N2;
        //printf("Result %g %c %g = %g \n",N1,Op,N2,sum);
    }else if (Op == '-'){

        sum = N1-N2;
         //printf("Result %g %c %g = %g \n",N1,Op,N2,sum);
        }else if (Op == '*'){

            sum = N1*N2;
             //printf("Result %g %c %g = %g \n",N1,Op,N2,sum);
        }else if (Op == '/'){

            sum = N1/N2;
             //printf("Result %g %c %g = %g \n",N1,Op,N2,sum);
        }else if (Op == '^'){

            sum = pow(N1,N2);
             //printf("Result %g %c %g = %g \n",N1,Op,N2,sum);
            //printf("Result %d = ",sum);
            }

        printf("Result %g %c %g = %g \n",N1,Op,N2,sum);
        printf("Do you want yo continue? (y/n)");
        scanf("%c",&con);

    }while ((con == 'y')|| (con == 'Y'));
    return 0;
}
