//Write a program to find cube of given number using function.
#include <stdio.h>
int cube();
int num;
int main()
{
	printf("Enter any number :");
	scanf("%d",&num);
	cube();
	return 0;
}
int cube()
{
	int sum;
	sum=num*num*num;
	printf("Cube of the given number is=%d\n",sum);
}