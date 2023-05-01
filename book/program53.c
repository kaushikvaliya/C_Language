//simpal program using nested ifs in which an if-else occurs in the if block.
#include<stdio.h>
int main()
{
	int a;
	printf("Enter any number :");
	scanf("%d",&a);
	if(a>0){
		printf("positive number\n");
	}
	else if (a<0)
	{
		printf("negative number\n");
	}
	else 
	{
		printf("Zero\n");
	}
	return 0;
}