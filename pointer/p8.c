#include <stdio.h>
int add (int*,int*);
int main()
{
    int a,b,*p,*q;
    printf("Enter frist number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    p=&a;
    q=&b;
    add(p,q);
    return 0;
}
int add (int *p,int*q)
{
    int c;
    c=*p+*q;
    printf("sum of two number : %d",c);
}
