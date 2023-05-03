//write a program to display sum of two numbers.
#include <stdio.h>
int main()
{
	int n1,n2,sum;
	printf("Enter frist number :");
	scanf("%d",&n1);
	
	printf("Enter second number :");
	scanf("%d",&n2);

	sum=n1+n2;
	printf("sum of two numbers =%d\n",sum);
	
	return 0;
}