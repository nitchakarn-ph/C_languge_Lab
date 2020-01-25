#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int com1,com2,a1,a2;
    char con='y';


    printf("Guess the flipping coin (1 for heads, 0 for tails):\n");
    do{


    printf("Enter the first answer :");
    scanf("%d%*c",&a1);
    printf("Enter the second answer :");
    scanf("%d%*c",&a2);
    //printf("Your answer is %d-%d",a1,a2);
    //srand(time(NULL));//22srand(time(NULL));
    com1 = rand()%2;
    com2 = rand()%2;
        if (com1==a1 && com2 == a2){
            printf("Your answer is %d-%d, Com answer = %d-%d. Your answer correct\n",a1,a2,com1,com2);
            //printf("Your answer correct \n");
        }else if (com1 != a1 || com2 != a2){
            printf("Your answer is %d-%d, Com answer = %d-%d. Your answer wrong!\n",a1,a2,com1,com2);
            }
        else if(com1 == a2 && com2 == a1){
            printf("Your answer is %d-%d, Com answer = %d-%d. Your answer correct\n",a1,a2,com1,com2);
        }

            //printf("Com answer = %d-%d.",com1,com2);
            //printf("Your answer wrong ! ");
        //}else if (com1 !=a2 || com2 != a1){
        //    printf("Your answer is %d-%d, Com answer = %d-%d. Your answer wrong!\n",a1,a2,com1,com2);
       // }

    //printf("Your answer is %d-%d, Com answer = %d-%d.",a1,a2,com1,com2);
    //printf("Your answer wrong ! ");
    printf("Do you want to continue? (y/n) ");
    scanf("\n%c",&con);

    }while ((con=='y')||(con=='Y'));
    return 0;
}
