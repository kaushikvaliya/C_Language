//Write a program to swap two numbers using function.
#include <stdio.h>
int swap ();
int a,b;
int main()
{
	printf("Enter number A :");
	scanf("%d",&a);
	printf("Enter number B :");
	scanf("%d",&b);
	swap();
	return 0;
}
int swap()
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("swap number is : A=%d\tB=%d\n",a,b);
}