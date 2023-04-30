//check the number is positive,Negative or zero.
#include <stdio.h>
int main()
{	
	int i;
	printf("Enter Number :");
	scanf("%d",&i);
	if(i>0)
	{
		printf("Positive NO\n");
	}
	else if(i<0)
	{
		printf("Negative No\n");
	}
	else
	{
		printf("Zero\n");
	}
	return 0;
}	