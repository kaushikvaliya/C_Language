//Write a program to check whether the given number is odd or even using
//function
#include <stdio.h>
int oe();   
int num;
int main()
{
	printf("Entr number :");
	scanf("%d",&num);
	oe();   //call 
}
int oe ()
{
	if(num%2==0)
	{
		printf("Even number\n");
	}
	else
	{
		printf("odd number\n");
	}
}