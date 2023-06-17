// all line red 
#include<stdio.h>
int main()
{
    FILE *fp;
    char ch[300];
    fp=fopen("k11.txt","r");
    if(fp==NULL){
        printf("file is not opend\n");
        return 0;
    }
    while((fgets(ch,sizeof(ch),fp))!=NULL)
    {
        printf("%s",ch);
    }
    fclose(fp);
    return 0;
}