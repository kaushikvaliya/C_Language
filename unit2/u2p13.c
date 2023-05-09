//Write a program to read two integers from user and find addition, subtraction,division and
// multiplication of two numbers.
#include <stdio.h>
int main()
{
	int n2,n1,add,subtraction,multiplication;
	float division;
	printf("Enter n1 :");
	scanf("%d",&n1);
	printf("Enter n2 :");
	scanf("%d",&n2);
	add=n1+n2;
	subtraction=n1-n2;
	multiplication=n1*n2;
	division=n1/n2;
	printf("sum=%d\n",add);
	printf("difference=%d\n",subtraction);
	printf("multipliy=%d\n",multiplication);
	printf("divide=%.2f\n",division);
return 0;
}