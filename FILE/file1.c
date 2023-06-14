//w mode 
#include <stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("k1.txt","w");
    if (fp==NULL)
    {
        printf("Some Arror.");
        return 0;
    }
    fprintf(fp,"kaushik valiya");
    fclose(fp);
    printf("File Created Successfully...");
    return 0;
}