#include<stdio.h>
struct employer
{
    int code;
    char name[10];
    float salary;
    short mo[10];
};
int main()
{
    struct employer a[5];
    int i;
    
    FILE *fp;
    fp=fopen("k8.txt","w");
    if(fp==NULL){
        printf("file is not opend :");
        return 0;
    }
    for(i=1;i<=2;i++){
    printf("Enter employer code :");
    scanf("%d",&a[i].code);
    fprintf(fp,"code : %d",a[i].name);

    printf("Enter employer name :");
    scanf("%s",&a[i].name);
    fprintf(fp,"name : %s",a[i].name);

    printf("Enter employer salary :");
    scanf("%f",&a[i].salary);
    fprintf(fp,"salary : %.2f",a[i].salary);

    printf("Enter employer mobaile number :");
    scanf("%s",&a[i].mo);
    fprintf(fp,"mobaile number : %s",a[i].mo);
    }
    fclose(fp);
    return 0;
}