//write  a program to ptint largest number of given integer number using is statement.
#include <stdio.h>
int main()
{
	int num1,num2;
	
	printf("Enter Frist Number :");
	scanf("%d",&num1);
	printf("Enter Second Number :");
	scanf("%d",&num2);
	if(num1>num2)
	{
		printf("%d is a largest\n",num1);
	}
	else if(num2>num1)
	{
		printf("%d is a largest\n",num2);
	}
	else
	{
		printf("Both are Equal\n");
	}
	return 0;
}		