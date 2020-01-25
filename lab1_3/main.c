#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int weight,BMI;
    float hight,h;

    printf("Your hight (cm.) is: ");
    scanf("%f",&h);
    printf("Your weight (kg.) is: ");
    scanf("%d",&weight);
    hight = h/100;
    //printf("%.2f\n",hight);
    BMI = weight/pow(hight,2);
    printf("BMI is %d\n",BMI);
    if (BMI < 18.5){
        printf("You is Very thin");
    }else if (BMI < 23.0)
        {
        printf("You is Thin");
        }else if (BMI < 25.0)
            {
                printf ("You is Slim");

            }else if (BMI < 30)
                {
                printf("You is fat");

                }else {

                    printf ("You is very fat");
                }
    return 0;
}
