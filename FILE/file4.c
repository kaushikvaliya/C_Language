//w mode 
#include <stdio.h>
int main()
{
    FILE *kk;
    char name[20];
    int ch;
    kk=fopen("k4.txt","w");
    if(kk==NULL)
    {
        printf("Some Arror..");
        return 0;
    }
    printf("Enter your name :");
    gets(name);
    fprintf(kk,"your name is : %s\n",name);

    printf("Enter your father name :");
    gets(name);
    fprintf(kk,"your father name is :%s\n",name);

    printf("Enter your brother name :");
    gets(name);
    fprintf(kk,"your brother name is :%s\n",name);
    fclose(kk);
    return 0;
}