//w mode 
#include <stdio.h>
int main()
{
    FILE *kk;
    int code,falg;
    char name[20];
    kk=fopen("k.txt","w");
    if(kk==NULL)
    {
        printf("Some Arror..");
        return 0;
    }
    while(1)
    {
    printf("Enter code :");
    scanf("%d",&code);
    fprintf(kk,"code=%d\n",code);

    printf("Enter name :");
    scanf("%s",&name);
    fprintf(kk,"name=%s\n",name);

    printf("1->do you enter more data\n2-> no \nplese enter 1&2 :");
    scanf("%d",&falg);
        if(falg==2){
            break;
        }
    }
    fclose(kk);
    return 0;

}