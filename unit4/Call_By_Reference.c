#include<stdio.h>
int call(int*);
int main()
{
    int a,*p;
    printf("Enter number :");
    scanf("%d",&a);
    p=&a;
    printf("valu of a before function call %d\n",*p);
    call(p); 
    printf("valu of after fuction call %d\n",*p);
    return 0;
}
int call(int *p)
{
    *p=*p+10;
    printf("valuof a = %d\n",*p);
}