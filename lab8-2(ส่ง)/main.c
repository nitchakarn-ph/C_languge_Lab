#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,N,inp,max=0,min=0;
    float average,sum=0;
    //float ;

    printf("Enter the number of entries: ");
    scanf("%d",&N);
    for (i=0;i>N;i==i){ /*ให้ i =0 โดยกำหนดเงื่อนไขว่า i>N น่ะ ถ้ามากกว่าให้ทำในลูป โดยเราให้ i==iตลอดเวลา เช่น เรารับค่า N = -1 ซึ่ง -1 < 0
            (i) ดังน้นมันจะไปทำในลูป*/
        printf("Please enter a positive integer !\n");
        printf("Enter the number of entries: ");
        scanf("%d",&N);
    }
    do {
        printf("Enter a number for entry %d :",i+1);
        scanf("%d",&inp);
        if (i==0){
            max=inp;
            //printf("max = %d\n",max);
        }else {
            if (max< inp){
                max=inp;
                //printf("change\n");
            }/*else {
                printf("No change\n");

            }*/
        }
        if (i==0){
            min = inp;
            //printf("min = %d",min);
        }else {

            if (min > inp){ // คิดตรงข้ามกับ max ค่าของ max < int ถูกแล้ว ดังนั้น min ก้แค่คิดตรงข้าม
               min = inp;
               //min = inp;
               //printf("min %d\n",min);
                }
        }
            sum = sum+inp ;
            average = sum/N;


        i++;

        }while (i<N);




        printf("Min = %d\n",min);
        printf("Max = %d\n",max);

        //sum = sum+inp ;
        //average = sum/N;

        printf("Sum = %.2f\n",sum);
        printf("Average = %.2f\n",average);
    return 0;
}
