//Write a program to find maximum of two numbers.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter value of num1:");
    scanf("%d",&num1);
    printf("enter value of num2:");
    scanf("%d",&num2);
    if(num1>num2)
    {
	    printf("number1 is maximum\n");
    }
    if(num2>num1)
    {
	    printf("number2 is maximum\n");
    }
    if(num1==num2)
    {
	    printf("number are equal\n");
    }
    return 0;
}
