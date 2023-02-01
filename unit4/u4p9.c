//Write a program to find maximum of two numbers using function.
#include <stdio.h>
int mx();
int a,b;
int main()
{
	printf("Enter frist number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	mx();
}
int mx()
{
	int maximum;
	if(a > b)
	{
		maximum=a;
	}
	else  
	{
		maximum=b;
	}
	printf("%d is maximum number.\n",maximum);
	return 0;
}