#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int numstd;

    //int std[n][score];
    printf("Enter the number of students: ");
    scanf("%d",&numstd);
    char n[numstd][100];//เป็นการบอกว่าเรารับตนมาเท่าไหร่่และชื่อของแต่ล่ะคนมีขนาดเท่าไร
    int score[numstd];
    for (i=0;i<numstd;i++)
    {
        printf("Student #%d\t\t",i+1);
        printf("Name :");
        scanf("%s",n[i]);
        printf("\t\t\tScore :");
        scanf("%d",&score[i]);
    }
    printf("-----------------------------------------------------\n");
    printf("ID\tName\tScore\tGrade\n");
    for (i=0;i<numstd;i++)
    {
        printf("%03d",i+1);
        printf("\t%s",n[i]);
        printf("\t%d",score[i]);
        if (score[i] >=80)
            {
               printf("\tA\n");
            }else if (score[i] >=70)
            {
                printf("\tB\n");
            }else if (score[i] >=60)
            {
               printf("\tC\n");
            }else if (score[i] >=50)
            {
                 printf("\tD\n");
            }else if (score[i] <50)
            {
                 printf("\tF\n");
            }

    }


    return 0;
}
