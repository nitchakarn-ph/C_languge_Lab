#include <stdio.h>
#include <stdio.h>

/*int main()
{
    FILE *fp;
    char ch;
    fp = fopen("test data","w");
    if ((fp = fopen("test data","w"))==NULL){
        printf("Error in open file");
        exit(1);
    }
    printf("Enter your sentence :");
    do
    {
        ch=getche();
        putc(ch,fp);
    }while (ch!='\r'); \\ \r = enter
    fclose(fp);

    return 0;
}*/
/*int main()
{
    printf("function getc()\n");

    FILE *fp;
    char ch;
    if ((fp = fopen("test data","r")== NULL))
    {
        printf("Error in to open your file\n");
        exit(1);
    }
    do
    {
        ch=getc(fp);
        //putc(ch,fp);
    }while (ch!=EOF); // EOF = end of file
    fclose(fp);

    return 0;
}*/

int main ()
{
  FILE * pFile;
  int c;
  int n = 0;
  pFile=fopen ("test data","r");
  if (pFile==NULL) perror ("Error opening file");
  else
  {
    do {
      c = getc (pFile);
      if (c == '$') n++;
    } while (c != EOF);
    fclose (pFile);
    printf ("File contains %d$.\n",n);
  }
  return 0;
}
