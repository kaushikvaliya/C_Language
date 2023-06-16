//w mode 
#include <stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("k2.txt","w");
    if(fp==NULL){
        printf("some arror....\n");
        return 0;
    }
    fputs("hi hello",fp);
    fclose(fp);
    printf("File Created Successfully...");
    return 0;
}