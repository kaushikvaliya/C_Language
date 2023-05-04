//Write a Program to Add Two Integers.
#include <stdio.h>
int main()
{
 	float no1,no2,sum;
	printf("Enter Frist number:");
	scanf("%f",&no1);
	printf("Enter Scond:");
	scanf("%f",&no2);
	sum=no1+no2;
	printf("%.2f+%.2f=%.2f\n",no1,no2,sum);
	return 0;
}	