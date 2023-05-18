//Write a program to find square of given number using function.
#include <stdio.h>
int sqr();
int num;
int main()
{
    printf("Enter number :");
    scanf("%d",&num);
    sqr();
    return 0;
}
int sqr()
{
    int k;
    k=num*num;
    printf("square of given number : %d",k);
}