#include <stdio.h>
#include <stdlib.h>

void passByValue (int x)//paramiter
{
    x=20;

}
void passByAddree (int x){
 *p = 20;//x=20
    printf ("&p (passByAddree)=%u\n",&p);
}
void passByValue(int *p){
int main (){
    int a=40;//argument
    passByValue(a);
    printf("a=%d\n",a);

    return 0;

    }
void printMatrix(int m [])

//
}
