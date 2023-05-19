//Write a program to find minimum of two numbers using function.
#include <stdio.h>
int minimum();
int i,j;
int main()
{
	printf("Enter frist numbers :");
	scanf("%d",&i);
	printf("Enter second number :");
	scanf("%d",&j);
	minimum();
	return 0;
}
int minimum() 
{
	int minimum;
	if(i<j)
	{
		minimum=i;
	}
	else  
	{
		minimum=j;
	}
	printf("minimum number is = %d.\n",minimum);
}