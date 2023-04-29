// write a program to read number and check the number is odd or even.
#include <stdio.h>
int main()
{
	int no;
	printf("Enter no :");
	scanf("%d", &no);
	if (no % 2 == 0)
	{
		printf("Even\n");
	}
	else
	{
		printf("odd\n");
	}
	return 0;
}