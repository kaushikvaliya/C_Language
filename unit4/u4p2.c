//Write a program to multiplication and division of two numbers using
//function
#include <stdio.h>
int mut();
int div();
float no1,no2;
int main()
{
	printf("Enter frist number :");
	scanf("%f",&no1);
	printf("Enter second number :");
	scanf("%f",&no2);
	mut();
	div();
}
int mut()
{
	float multiplication;
	multiplication=no1*no2;
	printf("multiplication=%.2f\n",multiplication);
}
int div()
{
	float division;
	division=no1/no2;
	printf("division=%.2f\n",division);
	return 0;
}