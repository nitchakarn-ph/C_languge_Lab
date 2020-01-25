#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[40];
    char str[40]= {'A','B','C'};
    char msg [40]="Hello";
    //'H','e','l','l','o',\0
    int i;
    i=0;
    printf("Enter");
    scanf("%[^\n]s",s);//เอาไว้เป็นค่าที่เราป้อนเวลาที่เรา enter
    printf("%s\n",s);
    printf("----Character-----\n");
    printf("%c\n",str[0]);//'A' เอาไว้พิมต่าพิมค่าที่ละตัว
    printf("%c\n",str[1]);//'B'
    printf("%c\n",str[2]);//'C'
    printf("%s",msg);
    int n=0;//แทนความยาวของสตริง
    i=0;
    //msg[0]='H'
    //msg[1]='e'
    //msg[2]='l'
    //msg[3]='l'
    //msg[4]='o'
    //msg[5]='\0'
    //Answer = 5 หาความยาว
    while (msg[i]!='\0')
    {
        i++;
    }
    n=i;
    printf("the lenght of msg is %d\n",n);
    int found=0;
    //str[0]='A'
    //str[1]='B'
    //str[2]='C'
    char test;
    printf("Enter a char:");
    scanf("\n%c",&test);
    //use a test varible
    //for searching in str
    int indexfound;
    for(i=0;i<3;i++)
    {
        if(str[i]==test)
        {
            found = 1;
            indexfound = i;
            break;
        }

    }
    if (found == 1)
    {
        printf("Found at %d\n",indexfound);


    }else
    {
        printf("not found\n");
    }
    return 0;
}
