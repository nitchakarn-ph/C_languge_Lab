#include <stdio.h>
#include <stdlib.h>

int main()
{
    float score1,score2;
    float f1,f2;
    float s1,s2,sall;


    printf("Enter scores of Mathematic sub-testing (two times)! \n");
    printf("Enter a percentage of the first testing:");
    scanf("%f",&f1);
    printf("Enter a percentage of the second testing:");
    scanf("%f",&f2);

if (f1+f2==100){
    printf("Score 1:");
    scanf("%f",&score1);
    printf("Score 2:");
    scanf("%f",&score2);
        s1 = score1*(f1/100);
        s2 = score2*(f2/100);
        sall = s1+s2;

        if (sall<=100){
        printf("Your average score is %g, your grade is A",sall);
        }else if (sall<=79.99){

        printf("Your average score is %g, your grade is B",sall);
        }else if (sall<=69.99){

            printf("Your average score is %g, your grade is C",sall);
            }else if (sall<=49.99){

                printf("Your average score is %g, your grade is D",sall);
                }else if (sall<=29.99){

                        printf("Your average score is %g, your grade is F",sall);
                    }
        }
else {
        printf("Error: Invalid percentages");
    }



    return 0;
}
