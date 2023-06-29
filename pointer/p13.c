#include<stdio.h>
struct kaushik
{
    int code;
    char name[10];
    int age;
};
int main()
{
    struct kaushik a,*p;
    p=&a;

    printf("Enter code :");
    scanf("%d",&p->code);
    printf("Enter name :");
    scanf("%s",&p->name);
    printf("Enter age :");
    scanf("%d",&p->age);
    return 0;
    
}