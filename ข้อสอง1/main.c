#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name [40]= "Nitchakarn ponharn" ;
    int Distance = 10 ;
    int velocity = 3 ;
    float time = 0;
    time = (float)Distance / velocity;  // time = hour
    time2 = (float)Distance / velocity; //time2 = min
    time3 = (float)Distance / velocity; //time2 = sec

    printf ("My name is %s\n",name);
    printf ("Distance between house and school : %d KMs\n",Distance);
    printf ("I walk by velocity (KM / Hour) : %d\n",velocity);

    return 0 ;
}
