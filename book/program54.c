// write a program to make operator using if-else.
#include <stdio.h>
int main()
{
	float num1, num2, cal;
	char ope;

	printf("Enter First Number : ");
	scanf("%f", &num1);
	printf("Enter Second Number : ");
	scanf("%f", &num2);
	fflush(stdout);
	getchar();
	printf("Choose Any Operator(+,-,/,*):");
	scanf(" %c", &ope);
	if (ope == '+')
	{
		cal = num1 + num2;
	}
	else if (ope == '-')
	{
		cal = num1 - num2;
	}
	else if (ope == '/')
	{
		cal = num1 / num2;
	}
	else if (ope == '*')
	{
		cal = num1 * num2;
	}
	else
	{
		printf("Invalid Input");
	}
	printf("ans = %.2f", cal);
	return 0;
}