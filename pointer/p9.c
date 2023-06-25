#include <stdio.h>
int oe(int*);
int main()
{
    int a,*p;
    printf("Enter number :");
    scanf("%d",&a);
    p=&a;
    oe(p);
    return 0;
}
int oe (int*p)
{
    if(*p%2==0){
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
    }
}