//one line rid
#include<stdio.h>
int main()
{
    FILE *fp;
    char ch[300];
    fp=fopen("kaushik.txt","r");
    if(fp==NULL){
        printf("file is not opend...\n");
        return 0;
    }


    fgets(ch,sizeof(ch),fp);
    printf("%s",ch);
    fclose(fp);
    return 0;
}