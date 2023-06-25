#include <stdio.h>
int main()
{
    int a,*p;
    printf("Enter number :");
    scanf("%d",&a);
    p=&a;
    printf("a=%p\n",&a);
    printf("p=%p\n",&p);
    return 0;
}