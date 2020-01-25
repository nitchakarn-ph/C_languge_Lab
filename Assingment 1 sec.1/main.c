#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N,N1,N2,i,N3=0,N4=1;
    char C;

    printf("1. Exponent\n");
    printf("2. Square root\n");
    printf("3. Factorial\n");
    printf("4. Stop working!!!\n");
    printf("Which is you want the program :");
    scanf("%c%*c",&C);
    printf("Number :");
    scanf("%d",&N);
    if (C=='1'){
        N1 = pow(N,2);
        printf("Exponent is %d",N1);
    }else if (C == '2'){
            if(N>=0){

            N2 = sqrt(N);
            printf("Square root is %d",N2);
            }else if(N<0){

            printf("Error !\n");
            }
        }else if (C == '3'){
                //i = i+1;
                    if (N>0){
                    for(i=0;i<=N;i++){

                        N3=i;
                        //printf("%d\n",N3);
                        if (N3>0){
                        N4*=N3;
                        }
                    }
                    printf("Factorial is %d",N4);
                }
                //printf("Factorial is %d",N4);

            }else if (C == '4'){

                    printf("Stop working!!!");
                }
    return 0;
}
