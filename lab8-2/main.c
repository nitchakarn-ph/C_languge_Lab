#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,N,inp,max=0,min;
    printf("Enter the number of entries :");
    scanf("%d",&N);
    //system("cls"); �繡���������ѹ������ͺ�á2
    do {
        printf("Enter a number for entry %d :",i+1); //���������������������Ҩ��Ѻ��� n ���������ѧ�����Ҩ֧��ͧ����ѹ�Ѻ����� n ᷹
                                                    //�ҡ��������ҡ����ѹ�ʴ���Ңͧ i ��.8
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
