//Write a program to sum of three numbers using function
#include <stdio.h>
int add();
int num1,num2,num3;
int main()
{
	printf("Enter frist number :");
	scanf("%d",&num1);
	printf("Enter second number :");
	scanf("%d",&num2);
	printf("Enter therd number :");
	scanf("%d",&num3);
	add();
	return 0;
}
int add()
{
	int sum;
	sum= num1+num2+num3;
	printf("sum of three number =%d\n",sum);
}