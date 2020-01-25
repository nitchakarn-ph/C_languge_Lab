#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int Ans;
   // int i;

    srand(time(NULL));
    do {
    Ans = rand()%6 + 1 ;
    printf("Your answer is %d\n",Ans);
    if (Ans<=3){
        printf("Low! \n" );

    }else if (Ans>3){
        printf("Hight! \n" );
    }
    }while(Ans!=6);
    printf("Random max is %d\n",Ans);


        printf("Number low is \n");


        printf("Number hight is \n");

    return 0;
}
