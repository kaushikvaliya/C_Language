// write a program to print larger number of two given integer number usung if-else statement.
#include <stdio.h>
int main()
{
	int a,b,larger;
	printf("Enter frist number :");
	scanf ("%d",&a);
	printf("Enter second number :");
	scanf ("%d",&b);
	if(a>b){
		larger=a;
	}
	else
	{
		larger=b;
	}
	printf("Both are larger number is =%d\n",larger);
	return 0;
}	