#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char s[5][10];//string 5 row
    printf("Enter your name :\n");
    for (i=0;i<5;i++){
    printf("%03d:",i);//เป็นการเพิ่งค่าในช่องว่าง เปนสามตัว
    scanf("\n%s",s[i]);

    }
    /*int i;
    for (i=0;i<5;i++){
    printf("s[%03d]=",i);
    scanf("\n%s")

    }*/
    return 0;
}
