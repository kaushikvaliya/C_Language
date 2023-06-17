//struct with FILE
#include <stdio.h> 
struct employer
{
    int roll,a,std;
    char name[20],pname[20];
    float fees;
    short bdate[20],mo[10];
    char email[30];
};
int main()
{
    struct employer a[5];
    int i;
    FILE *fp;
    fp=fopen("k11.txt","w");
    if(fp==NULL){
        printf("File is not opend.\n");
        return 0;
    }
    for(i=1;i<=2;i++){
        printf("Enter std :");
        scanf("%d",&a[i].std);
        fprintf(fp,"std : %d\n",a[i].std);

        printf("Enter roll number :");
        scanf("%d",&a[i].roll);
        fprintf(fp,"roll : %d\n",a[i].roll);

        printf("Enter student name :");
        scanf("%s",&a[i].name);
        fprintf(fp,"student name : %s\n",a[i].name);

        printf("Enter student b-date :");
        scanf("%s",&a[i].bdate);
        fprintf(fp,"student B-date : %s\n",i[a].bdate);

        printf("Enter parents name :");
        scanf("%s",&a[i].pname);
        fprintf(fp,"parents name : %s\n",i[a].pname);

        printf("Enter fees :");
        scanf("%f",&i[a].fees);
        fprintf(fp,"student fees : %.2f\n",i[a].fees);

        printf("Enter E-mail :");
        scanf("%s",&i[a].email);
        fprintf(fp,"E-mail : %s\n",i[a].email);
        
        printf("Enter mobile number :");
        scanf("%s",&i[a].mo);
        fprintf(fp,"mobile number : %s\n",i[a].mo);

        fprintf(fp,"\n");
        printf("\n");
    }
    for(i=1;i<=2;i++){
        printf("std : %d\n",i[a].std);
        printf("roll : %d\n",i[a].roll);
        printf("student name : %s\n",i[a].name);
        printf("student B-date : %s\n",i[a].bdate);
        printf("parents name : %s\n",i[a].pname);
        printf("student Fees : %.2f\n",i[a].fees);
        printf("E-mail : %s\n",i[a].email);
        printf("mobile number : %s\n",i[a].mo);
        printf("\n");
    }
    fclose(fp);
    return 0;
}