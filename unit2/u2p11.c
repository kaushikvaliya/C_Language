//Write a program to calculate the sum of 5 subject and find the percentage.
#include <stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,sum,total=500;
	float per;
	
	printf("Enter subject 1 mark :");
	scanf("%d",&s1);
	printf("Enter subject 2 mark :");
	scanf("%d",&s2);
	printf("Enter subject 3 mark :");
	scanf("%d",&s3);
	printf("Enter subject 4 mark :");
	scanf("%d",&s4);
	printf("Enter subject 5 mark :");
	scanf("%d",&s5);
	
	sum=s2+s2+s3+s4+s5;
	printf("Sum Of THe 5 subjects :%d\n",sum);

	per=(sum*100)/total;
	printf("percent is :%.2f\n",per);
	
	return 0;
}