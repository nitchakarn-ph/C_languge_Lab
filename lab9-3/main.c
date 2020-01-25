#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50];
    int i=0;

    for (i=0;i<50;i++){
            printf("Enter word:");
            scanf("%[^\n]s",a);
        if (a !='\0'){
            printf("%s\n",a);
            }
        break;
    }

    i=0;
    int A=0,E=0,I=0,O=0,U=0;
    //int A1;
    //int j=0;
    while (a[i]!='\0')
        {

            if (a[i]=='a'){
                A+=1;
                 //a[i]='*';
                 //E=a[i];
                //printf("%c",A);
            }else if(a[i]=='e'){
                E+=1;

                //printf("%c",E);
                    //printf("e: %d\n",E);
                }else if (a[i]=='i'){
                    I+=1;

                    //printf("%c",I);
                        // printf("i: %d\n",I);
                    }else if (a[i]=='o'){
                        O+=1;

                       // printf("%c",O);
                            //printf("o: %d\n",O);
                        }else if (a[i]=='u'){
                            U+=1;

                            //printf("%c",U);
                                // printf("u: %d\n",U);
                        }
            i++;
        }

    i=0;
    //A2=A1;

   /* printf("a: %c\n",A);
    printf("e: %c\n",E);
    printf("i: %c\n",I);
    printf("o: %c\n",O);
    printf("u: %c\n",U);*/
    printf ("\na:");
                for (i=0;i<A;i++)
                {
                printf("*");
                }
    printf ("\ne:");
                for (i=0;i<E;i++)
                {
                printf("*");
                }
    printf ("\ni:");
                for (i=0;i<I;i++)
                {
                printf("*");
                }
    printf ("\no:");
                for (i=0;i<O;i++)
                {
                printf("*");
                }
    printf ("\nu:");
                for (i=0;i<U;i++)
                {
                printf("*");
                }

    return 0;
}
