#include <stdio.h>
int main()
{
	int no;
	char ch;
	pass:
	printf("Enter number:");
	scanf("%d",&no);
	if(no%2==0)
	{
		printf("Even no\n");
	}
	else
	{
		printf("odd no\n");
	}
	printf("Do you want do exit :");
	scanf("%s",&ch);
	if(ch=='n')
	{
		goto pass;
	}
	return 0;
}	