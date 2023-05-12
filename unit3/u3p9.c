//Write a Program to Check Whether the Entered Year is Leap Year or not.
#include<stdio.h>
int main()
{
	int year;
	printf("enter year:");
	scanf("%d",&year);
	if((year%400)==0)
		printf("%d is a leap year\n",year);
	else
	if((year%100)==0)
		printf("%d is a not leap year\n",year);
	else
	if((year%4)==0)
		printf("%d is a leap year\n",year);
	else
		printf("%d is a not leap year\n",year);
	return 0;
}