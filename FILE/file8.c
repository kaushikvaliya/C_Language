//r//fscanf
#include <stdio.h>
int main ()
{
    FILE *fp;
    char buff[200];
    fp=fopen("kaushik.txt","r");
    while (fscanf(fp,"%s",buff)!=EOF)
    {
        printf("%s\n",buff);
    }
    fclose(fp);
    return 0;
}