#include <stdio.h>
int main()
{
    int a,*p;
    printf("Enter number :");
    scanf("%d",&a);
    p=&a;
    if(*p%2==0){
        printf("Even number\n");
    }
    else
    {
        printf("odd number\n");
    }
    return 0;
}