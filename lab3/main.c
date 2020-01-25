#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[10]="npop";
    float d,v,ts,tsec,tmin;

    printf("Input your name : %s\n",name);
    printf("Input Distance (KM) :");
    scanf("%f",&d);
    printf("Input avg velocity (KM/H) :");
    scanf("%f",&v);
    printf("My name is %s",name);
    printf("Distance between house and school : %.2f KMs\n",d);
    printf("I walk by velocity (KM/Hour) : %.2f\n",v);
    float th,th1,tsec1,tsec3;
    th = d/v;
    float tm,tmin1,tmin2;
    tm = th-(int)th;//เพื่อค่า th = ทศนิยมของ th
    th1 = (float)th-(float)tm;
    //th1 = (float)tm -tm;
    tmin1 = (float)tm*60;//ค่าเต็มของ tmin
    tmin2 = (int)tmin1;
    tsec = tmin1-tmin2; //จะได้ทศนิยม
    tsec1 = tsec *60;
    tsec3 = (int)tsec1;
    //tsec = tsec-(float)tsec;
    printf("%.f\n",th1);
    printf("%.f",tmin2);

    printf("%.f",tsec3);

    //printf("Time from home to school : %d",th);


    return 0;
}
