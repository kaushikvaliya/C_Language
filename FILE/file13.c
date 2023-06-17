#include <stdio.h>
struct employer
{
    int code;
    char name[20];
    float salary;
    short mo[10];
};
int main()
{
    struct employer a[5];
    int i;
    FILE *fp;
    int flag, key, poj;
    char ch;

    fp = fopen("valiya.txt", "w");
    if (fp == NULL)
    {
        printf("filr is not open...");
        return 0;
    }

    printf("Enter employer informeshan.\n");
    for (i = 1; i <= 2; i++)
    {
        printf("Enter employer code :");
        scanf("%d", &a[i].code);
        fprintf(fp, "code : %d\n", a[i].code);

        printf("Enter employer name :");
        scanf("%s", &a[i].name);
        fprintf(fp, "name : %s\n", a[i].name);

        printf("Enter employer salary :");
        scanf("%f", &a[i].salary);
        fprintf(fp, "salary : %.2f\n", a[i].salary);

        printf("Enter employer phone number :");
        scanf("%s", &a[i].mo);
        fprintf(fp, "mobaile number : %s\n", a[i].mo);
        printf("\n");
    }
    fclose(fp);
pass:
    printf("Enter surch employer code :");
    scanf("%d", &key);
    flag = 0;
    for (i = 1; i <= 2; i++)
    {
        if (a[i].code == key)
        {
            flag = 1;
            poj = i;
            break;
        }
    }
    if (flag == 1)
    {
        printf("code:%d\n", a[poj].code);
        printf("name:%s\n", a[poj].name);
        printf("salary:%.2f\n", a[poj].salary);
        printf("mobaile no:%s\n", a[poj].mo);
    }
    else
    {
        printf("not match\n");
    }
go:
    printf("Do you want do exit y & n :");
    scanf("%s", &ch);
    if (ch == 'y')
    {
        goto pass;
    }
    else if (ch == 'n')
    {
        return 0;
    }
    else
    {
        printf("Please Enter y & n.\n");
    }
    goto go;
}