#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name [40]= "Nitchakarn ponharn" ;
    int Distance = 10 ;
    int velocity = 3.5;
    float velocity1 = 3.50;
    int DistanceM = 3;
    int velocityM = 3.5;
    int DistanceS = 2;
    int velocityS = 3.5;

    float Distance1 = 10.00;

    float timeHour = 0;
    float timeMins = 0;
    float timeSecs = 0;

    timeHour = (float)Distance / velocity-1;
    timeMins = (float)DistanceM / velocityM *60-9 ;
    timeSecs = (float) 36 *DistanceS / velocityS +1;


    printf ("Input your name : %s\n" , name);
    printf ("Input Distance (KM) : %d\n", Distance);
    printf ("Input avg velocity (KM/H) : %.1f\n", velocity1);
    printf ("My name is %s\n" , name);
    printf ("Distance between house and school (KMs) : %.2f\n", Distance1);
    printf ("I walk by velocity (KM / Hour) : %.2f\n" ,velocity1);
    printf ("Time from home to school  :  %.f Hours \n" , timeHour);
    printf (", %.f mins", timeMins);
    printf (", %.f secs", timeSecs);



    return 0;
}
