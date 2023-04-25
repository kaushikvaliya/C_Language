//write a program to find the sum of any five numbers.
#include <stdio.h>
int main()
{
	int no1,no2,no3,no4,no5,ans;
	
	printf("Enter five number :");
	scanf("%d %d %d %d %d", &no1,&no2,&no3,&no4,&no5);
	ans= no1+no2+no3+no4+no5;
	printf("sum=%d+%d+%d+%d+%d=%d\n" , no1,no2,no3,no4,no5,ans);
	return 0;
}	 