#include <stdio.h>

/*int main()
{
    FILE *fp;

    fp = fopen("example.txt", "w");

    fputs("The first line of writing to the text file.\n", fp);
    fputs("The second line.\n", fp);
    fprintf(fp, "The third line with number %.2f.\n", 5.43);

    fclose(fp);
    return 0;
}*/


int main()
{
    FILE *fp;

    fp = fopen("example.txt", "r");
    char buffer[255];

    fgets(buffer, 255, fp);
    printf("%s", buffer);

    fgets(buffer, 255, fp);
    printf("%s", buffer );

    fscanf(fp, "%s", buffer);
    printf("%s\n", buffer);

    fscanf(fp, "%s", buffer);
    printf("%s\n", buffer);

    fclose(fp);
    return 0;
}
