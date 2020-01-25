#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name [40]= "Nitchakarn ponharn" ;
    int Distance (KM) = 10 ;
    int velocity (KM/H) = 3.5 ;


    float timeHour = 0;
    float timeMin = 0;
    float timeSec = 0;

    timeHour = (float)Distance / velocity;
    timeMin = (float)Distance / velocity * 6-1;
    timeSec = (float)Distance / velocity *18-1;


    printf ("My name is %s\n",Nitchakarn ponharn);
    printf ("Distance between house and school : %d KM\n",Distance);
    printf ("I walk by velocity (KM / Hour) : %d\n",velocity);
    printf ("Time from home to school : %.f Hours\n",timeHour); printf (",%.f mins",timeMin); printf (",%.f secs",timeSec);
    return 0;
}
