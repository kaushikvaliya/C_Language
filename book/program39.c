//write a program to read three number and find out maximum no from these three.
#include <stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter num1 :");
	scanf("%d",&num1);
	printf("Enter num2 :");
	scanf("%d",&num2);
	printf("Enter num3 :");
	scanf("%d",&num3);
	
	if(num1>num2 && num1>num3)
	{
		printf("First No is Grater\n");
	}
	else if(num2>num1 && num2>num3)
	{
		printf("Second No is Grater\n");
	}
	else if(num3>num1 && num3>num2)
	{
		printf("Third No is Grater\n");
	}
	return 0;
}	