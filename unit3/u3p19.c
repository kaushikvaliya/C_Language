//Write a Program to Find Sum of Natural Numbers.
#include <stdio.h>
int main()
{
	int i ,num,sum=0;
	printf("Enter any integer:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		sum+=i;
	}
	printf("sum of Natural number =%d\n",sum);
	return 0;
}	