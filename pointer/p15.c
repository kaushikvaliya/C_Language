#include<stdio.h>
int evod(int *);
int main()
{
    int n1,*p;

    printf("Enter any number :");
    scanf("%d",&n1);
    p=&n1;
    evod(p);
    return 0;
}
int evod(int *a)
{
    if(*a%2==0){
        printf("Even number\n");
    }
    else
    {
        printf("odd number\n");
    }
}