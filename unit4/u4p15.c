//Write a Program to Display Prime Numbers between a given range by using 
//Function.
#include <stdio.h>
int ch();
int n1,n2;
int main()
{
	printf("Enter frist number :");
	scanf("%d",&n1);
	printf("Enter second number :");
	scanf("%d",&n2);
	printf("Prime numbers between %d and %d are:\n", n1, n2);	
	ch();
}
int ch ()
{
	int i,j,count;
	for(i=n1;i<=n2;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				count++;
		}
			if(count==2)
				printf("%d\n",i);
	}
	return 0;
}		