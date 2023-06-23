#include <stdio.h>
int main ()
{
    int a,b,c,*p,*q;
    printf("Enter frist number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    p=&a;
    q=&b;
    c=*p+*q;
    printf("sum of number :%d",c);
}