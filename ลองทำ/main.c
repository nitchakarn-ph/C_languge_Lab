#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name [40]= "Nitchakarn ponharn" ;
    int Distance = 10 ;
    int velocity = 3 ;



    float timeHour = 0;

    timeHour = (float)Distance / velocity;



    printf ("My name is %s\n",name);
    printf ("Distance between house and school : %d KMs\n",Distance);
    printf ("I walk by velocity (KM / Hour) : %d\n",velocity);
    printf ("Time from home to school : %.f Hours\n",timeHour);


    return 0;
}
