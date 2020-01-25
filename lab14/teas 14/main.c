#include <stdio.h>
#include <stdlib.h>

void writeFile (char * fileName)
{
    FILE * fp;
    fp= fopen("fileName","w");//if con not opening file ,will return 0 or NULL
    if (fp==0)
    {
        printf("!!!CANOT OPENING FILE!!!");

    }
    fprintf(fp,"%d\t%s\t%f\n",1,"AA",12.5);
    fprintf(fp,"%d\t%s\t%f\n",2,"BB",1.5);
    fprintf(fp,"%d\t%s\t%f\n",3,"CC",2.10);
    fprintf(fp,"%d\t%s\t%f\n",4,"DD",7.35);
    fclose(fp);
}

void typeFile(char * fileName)
{
    char command[50];
    sprintf(command,"type %s ",fileName);//sprintf keep string in char command
    system(command);
}
void readFile(char * fileName)
{
    FILE * fp = fopen("fileName","r");
    if (fp==0)
    {
       printf("%s  dose not exit.st",fileName) ;
        return;

    }
    printf("fp=%d %d\n",fp,feof(fp));
    int no= 0;
    char firsName[50];
    double salary =0;
    int n=0;

    while (feof(fp)==0)
    {
        n=fscanf(fp,"%d",&no);
        printf("n=%d\n",n);
        printf("fp=%d %d\n",fp,feof(fp));
        n=fscanf(fp,"%s",firsName);
        fscanf(fp,"%lf\n",&salary);
        fscanf(fp,"%d\t%-30s\t%f\n",no,firsName,salary);
    system("pause");
    }
    fclose(fp);


}
int main()
{  char fileName[40]="student.txt";
    readFile(fileName);
    return 0;
}
