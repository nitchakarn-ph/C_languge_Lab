#include <stdio.h>
#include <stdlib.h>

int main()
{
     char name[20];
     char last_n[20];
     float credit_M ;
     float grand_M ;
     float credit_E ;
     float grand_E ;
    float Gpa = 0.0;



    printf  ("Enter first  name :");
    scanf   ("%s" ,name); // ชื่อ
    printf  ("Enter last name :");
    scanf   ("%s" ,last_n);


    printf  ("Mathematic : #credit #grand(0-4): ");
    scanf   ("&f%f" ,&credit_M ,&grand_M);
    printf  ("English : #credit #grand(0-4): ");
    scanf   ("&f%f" ,&credit_E ,&grand_E);
    Gpa =  (credit_M*grand_M)+ (credit_E*grand_E)/ (credit_M+ credit_E);
    printf  ("GPA of %s ,%s is %.2f" ,name ,last_n, Gpa);


    return 0;
}
