#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,N,inp,max=0,min;
    printf("Enter the number of entries :");
    scanf("%d",&N);
    //system("cls"); เป็นการสั่งให้มันขึ้นแค่รอบแรก2
    do {
        printf("Enter a number for entry %d :",i+1); //เพราะว่าเราไม่รู้ว่าเราจะรับค่า n มาเท่าไหร่ดังนั้นเราจึงต้องให้มันรับค่าเป็น n แทน
                                                    //จากนั้นเราอยากให้มันแสดงค่าของ i ตย.8
        scanf("%d",&inp);
        if(i==0){
            max=inp;
            printf("rounf = %d , max = %d \n",i,max);
        }else{

            if (max<inp){
                max = inp;
                printf("change!! \n");
            }else{
                printf("No change!! \n");
            }


            printf("rounf = %d , max = %d \n",i,max);
        }


        //printf("Input new number %d\n",inp);
        //scanf("%d\n",&inp);

            /*if (min<max){
            min = max;
            }*/

        i++;
    }while (i<N);
    //printf("Please enter a positive intiger !\n");
     /*if (max<inp){
        max = inp;
        printf("Min = %d\n",max);
        }*/
         printf("max = %d\n",max);
        printf("Min = %d\n",min);
    return 0;
}
