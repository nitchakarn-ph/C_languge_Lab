#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int score;
    char name[50];

    printf("Lab1_1\n");
    printf("Your name is : ");
    scanf("%s",name);
    printf("Your score is :");
    scanf("%d",&score);
    if (score < 80){

        printf("Your grade is U");

    }else {

        printf("Your grade is S");
    }

    printf("-----------------------------------------------------------\n");
    printf("Lab1_2\n");
    float x,y,m,x1,y1;

    printf("The coordinate is ");
    scanf("%g",&x);
    printf("The coordinate is ");
    scanf("%g",&y);
    printf("The coordinate is ");
    scanf("%g",&x1);
    printf("The coordinate is ");
    scanf("%g",&y1);
    m = x/y;
    printf("The slop is %g\n",m);
    printf("The coordinate 1 is (%g, %g)\n",x,y);
    printf("The coordinate 2 is (%g, %g)\n",x1,y1);

    printf("-----------------------------------------------------------\n");
    printf("Lab1_3\n");
    int weight;
    float hight,h,BMI;

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
        printf("-----------------------------------------------------------\n");
    printf("Lab1_4\n");

    //int weight; //weight use connection from Lab1_3
    //float hight,h,BMI; ////hight,h,BMI use connection from Lab1_3
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
        printf("You is Very thin\n");
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
