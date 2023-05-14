//Write a Program to Count Number of Digits of an Integer.
#include<stdio.h>
int main()
{
	long n;
	int count=0;
	printf("enter an integer:");
	scanf("%ld",&n);
	while(n!=0){
		n/=10;
		count++;
	}
	printf("number of digit:%d\n",count);
	return 0;
}