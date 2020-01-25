#include <stdio.h>
#include <stdlib.h>

int main()
{         int i=0,n=0,a=0,e=0,I=0,o=0,u=0;
          char Str[50];

printf("Enter word:");

          for (i=0;i<50;i++)
          {
              scanf("%c",&Str[i]);

                    if(Str[i]=='\n'){break; } //if you press "Enter" it will move out from this loop

                    if((Str[i])=='a')
                              {
                                 a+=1 ;
                              }
                    if((Str[i])=='e')
                              {
                                 e+=1 ;
                              }
                    if((Str[i])=='i')
                              {
                                 I+=1 ;
                              }
                    if((Str[i])=='o')
                              {
                                 o+=1 ;
                              }
                    if((Str[i])=='u')
                              {
                                 u+=1 ;
                              }
                    n = n+1;

          }

//Output all character that you put
          for (i=0;i<n;i++)
            {
                printf("%c",Str[i]);
            }

 printf("\na:");

                      for(i=0;i<a;i++)

                     {
                               printf("*");
                     }

 printf("\ne:");

                      for(i=0;i<e;i++)

                     {
                               printf("*");
                     }


 printf("\ni:");

                      for(i=0;i<I;i++)

                     {
                               printf("*");
                     }

 printf("\no:");

                      for(i=0;i<o;i++)

                     {
                               printf("*");
                     }

 printf("\nu:");

                      for(i=0;i<u;i++)

                     {
                               printf("*");
                     }


    return 0;
}


