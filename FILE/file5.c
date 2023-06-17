//w mode 
#include <stdio.h>
int main()
{
    FILE *fp;
    int roll,mark;
    char name[10];
    char ch;
    fp=fopen("k5.txt","w");
    if(fp==NULL){
        printf("Some Arror..");
        return 0;
    }
    go:
    printf("Enter your roll number :");
    scanf("%d",&roll);
    fprintf(fp,"Roll=%d\n",roll);

    printf("Enter your name :");
    scanf("%s",&name);
    fprintf(fp,"Name=%s\n",name);

    printf("Enter yout total mark :");
    scanf("%d",&mark);
    fprintf(fp,"Mark=%d\n",mark);

    kk:
    printf("Do you exit press (y) \nDo you enter more data press (n):");
    scanf("%s",&ch);
    if(ch=='n'){
        goto go;
    }
    else if (ch == 'y'){
        return 0;
    }
    else
    {
        printf("sorry Please Enter y & n.\n");
    }
    goto kk;

    fclose(fp);
    return 0;
}