#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,N,inp,max=0,min=0;
    float average,sum=0;
    //float ;

    printf("Enter the number of entries: ");
    scanf("%d",&N);
    for (i=0;i>N;i==i){ /*��� i =0 �¡�˹����͹���� i>N ��� ����ҡ����������ٻ �������� i==i��ʹ���� �� ����Ѻ��� N = -1 ��� -1 < 0
            (i) �ѧ���ѹ��价���ٻ*/
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

            if (min > inp){ // �Դ�ç�����Ѻ max ��Ңͧ max < int �١���� �ѧ��� min ����Դ�ç����
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
