//Write a program to check whether a number is a prime number or not using
//function.
#include <stdio.h>
int pri();
int i,x;
int main()
{
	printf("Enter number:");
	scanf("%d",&x);
	pri();
}
int pri ()
{
	for(i=2;i<=x-1;i++)
	if(x%i==0)
		break;
	if(i==x){
		printf("prime number\n");
	}
	else
	{
		printf("not prime number\n");
	}
	return 0;
}