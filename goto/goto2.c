//write a program to read number and check the number is odd or even using goto Statement.
#include <stdio.h>
int main()
{
	int n;
	printf("Enter number :");
	scanf("%d",&n);
	if(n%2==0)
		goto even;
	else
		goto odd;
	even:
	printf("Even\n");
	return 0;
	odd:
	printf("odd\n");
	return 0;
}