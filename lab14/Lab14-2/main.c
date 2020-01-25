#include <stdio.h>
#include <stdlib.h>

int main()

{
        char filename[40];
        printf("Enter a file name to read :");
        scanf("%s",filename);

        FILE *fp;
       fp =  fopen(filename,"r+");

        if (fp==NULL)
        {
            printf("Error : %s does Not exist",filename);
            exit (1);
        }
    int id ,score;
    char name[40],grad;
printf("-----------------------------------------------------------------------------\n");
printf(" student ID \t Name\t \t\t  Score \t \tGrad\n");
printf("-----------------------------------------------------------------------------\n");
          while (!feof(fp)){

          fscanf(fp,"%d",&id);
          printf("%d\t",id);
          fscanf(fp,"%s",name);
          printf("%s\t",name);



          /*fscanf(fp,"%d",&score);
          printf("%d\n",score);
           /*if (score>=80)
          {
          grad = 'A';
          printf ("%d\t %s\t %d \t %c\n",id,name,score,grad);
          }
          else if (score>69)
          {
          grad = 'B';
          printf ("%d\t %s\t %d \t %c\n",id,name,score,grad);
          }else if (score>59)
          {
          grad = 'C';
          printf ("%d\t %s\t %d \t %c\n",id,name,score,grad);
          }else if (score>49)
          {
          grad = 'D';
          printf ("%d\t %s\t %d \t %c\n",id,name,score,grad);
          }else{grad = 'F';
          printf ("%d\t %s\t %d \t %c\n",id,name,score,grad);}*/


}
fclose(fp);


    return 0;
}

