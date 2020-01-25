#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name [40]= "Nitchakarn ponharn" ;
    int Distance = 10 ;
    int velocity = 3 ;
    int DistanceM = 1;
    int velocityM = 3;
    int DistanceS = 10;
    int velocityS = 3;

    float min = 1;


    float timeHour = 0;
    float timeMins = 0;
    float timeSec = 0;


    timeHour = (float)Distance / velocity;
    timeMins = ((float) 60 * DistanceM / velocityM) - min  ;
    timeSec = (float)DistanceS / velocityS *18-1;


    printf ("My name is %s\n",name);
    printf ("Distance between house and school : %d KMs\n",Distance);
    printf ("I walk by velocity (KM / Hour) : %d\n",velocity);
    printf ("Time from home to school : %.f Hours\n",timeHour);
    printf (", %.f mins ",timeMins);
    printf (", %.f secs " , timeSec);


    return 0;
}
