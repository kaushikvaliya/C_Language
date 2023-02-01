//Write a program to calculate the average of 5 marks using function.
#include <stdio.h>
int ave();
int n1,n2,n3,n4,n5;
int main()
{
	printf("Enter number 1 :");
	scanf("%d",&n1);
	printf("Enter number 2 :");
	scanf("%d",&n2);
	printf("Enter number 3 :");
	scanf("%d",&n3);
	printf("Enter number 4 :");
	scanf("%d",&n4);
	printf("Enter number 5 :");
	scanf("%d",&n5);
	ave();
	return 0;
}
int ave()
{
	int sum;
	sum=n1+n2+n3+n4+n5;
	sum/=5;
	printf("average is =%d\n",sum);
}