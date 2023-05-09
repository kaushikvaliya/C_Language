//Write a program to find minimum of two numbers.
#include <stdio.h>
int main()
{
	int a,b,minimum;
	printf("Enter first number :");
	scanf("%d",&a);
	printf("Enter second number :");
	scanf("%d",&b);
	if(a<b)
	{
		minimum=a;
	}
	else
	{
		minimum=b;
	}
	printf("minimum number is :%d\n",minimum);
	return 0;
}