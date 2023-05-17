#include<stdio.h>
int call(int);
int main()
{
    int a;
    printf("Enter number :");
    scanf("%d",&a);
    printf("valu of a before function call %d\n",a);
    call(a);
    printf("valu of after fuction call %d\n",a);
    return 0;
}
int call(int a)
{
    a=a+10;
    printf("valuof a = %d\n",a);
}