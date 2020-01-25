#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    float cap_1; // capital
    float inter_1; // interest rate
    int number_d; // number of day
    int number_y = 365; // number of year
    float inter_2;
    float balance;
    float int_per_y;
    float balance_2;


    printf  ("Enter your account name :");
    scanf   ("%s" ,name); // ชื่อ

    printf  ("Enter your capital : ");
    scanf   ("%f",&cap_1); // capital

    printf  ("Enter yearly interest rate : ");
    scanf   ("%f",&inter_1); // interest

    printf  ("Enter the number of day :");
    scanf   ("%d",&number_d); // number of day

    printf  ("Account name : %s\n",name);

    // balance amount = capital * interest * number of day / number day of year
    // interest คิดเป็นร้อยละ

    inter_2 = inter_1 / 100;
    balance = cap_1 * inter_2 * number_d / number_y + cap_1;


    printf  ("Balance amount : %.2f\n", balance);

    inter_2 = inter_1 / 100;
    balance_2 = cap_1 * inter_2 * number_d / number_y ;

    printf  ("Your interest per year is : %.2f\n",balance_2);





    return 0;
}
