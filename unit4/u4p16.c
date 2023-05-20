#include<stdio.h>
struct kaushik
{
    char name[10];
    int roll,age;
};
struct kaushik valiya();
int main()
{
    struct kaushik a;
    a=valiya();
    printf("roll : %d\n",a.roll);
    printf("name : %s\n",a.name);
    printf("age : %d\n",a.age);
    return 0;
}
struct kaushik valiya()
{
    struct kaushik a;
    printf("Enter roll number :");
    scanf("%d",&a.roll);
    printf("Enter name :");
    scanf("%s",&a.name);
    printf("Enter age :");
    scanf("%d",&a.age);
    return a;
}