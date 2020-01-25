#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i=0,n=0,score[5];
    char name[5][10];
    int id[5];
    char gra[5];
    printf("Enter the number of students : ");
    scanf("%d",&n);
     for (i=0;i<n;i++)
    {
        printf("Student #%d",i+1);
        printf("\tname : ");
        scanf("%s",name[i]);
        printf("\t\tscore: ");
        scanf("%d",&score[i]);
        id[i]=i+1;
         if(score[i]>=80)
        {
            gra[i]='A';
        }
        else if (score[i]>=70)
        {
            gra[i]='B';
        }
        else if (score[i]>=60)
        {
            gra[i]='C';
        }
        else if (score[i]>=50)
        {
            gra[i]='D';
        }
        else
        {
            gra[i]='F';
        }
    }
    printf("----------------------------------\n");
    printf("No.\tID\tName\tScore\tGrade\n");
    printf("----------------------------------\n");
    /*for (i=0;i<n;i++)
    {
        printf("%d\t",i+1);
        printf("%03d\t",id[i]);
        printf("%s\t",name[i]);
        printf("%d\t",score[i]);
        printf("%c\n",gra[i]);

    }*/
     int swflag=1;
     int tmpSc,tmpId;
     char tmpNa[10],tmpGra;

        while(swflag == 1)
        {
           swflag=0;
           for(i=0;i<n-1;i++)
           {
               if (score[i]<score[i+1])
               {
                    tmpSc = score[i];
                    score[i] = score[i+1];
                    score[i+1] = tmpSc;

                    tmpId = id[i];
                    id[i] = id[i+1];
                    id[i+1]= tmpId;

                    strcpy(tmpNa,name[i]);
                    strcpy(name[i],name[i+1]);
                    strcpy(name[i+1],tmpNa);

                    tmpGra = gra[i];
                    gra[i] = gra[i+1];
                    gra[i+1] = tmpGra;
                    swflag = 1;
               }

           }
        }
         for (i=0;i<n;i++)
            {
              printf("%d\t",i+1);
              printf("%03d\t",id[i]);
              printf("%s\t",name[i]);
              printf("%d\t",score[i]);
              printf("%c\n",gra[i]);
            }

    return 0;
}
