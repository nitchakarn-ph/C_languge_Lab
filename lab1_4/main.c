#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int weight;
    float hight,h,BMI;
    int i=0,N;

    printf("The number student :");
    scanf("%d",&N);
    for (i=0;i<N;i++){

    printf("Your hight (cm.) is: ");
    scanf("%f",&h);
    printf("Your weight (kg.) is: ");
    scanf("%d",&weight);
    hight = h/100;
    //printf("%.2f\n",hight);
    BMI = weight/pow(hight,2);
    printf("BMI is %.2f\n",BMI);




        if (BMI < 18.5){
        printf("You is Very thin");
        }else if (BMI < 23.0)
            {
            printf("You is Thin\n");
            }else if (BMI < 25.0)
                {
                    printf ("You is Slim\n");

                }else if (BMI < 30)
                    {
                        printf("You is fat\n");

                    }else {
                        printf ("You is very fat\n");
                    }
    }
    return 0;
}
