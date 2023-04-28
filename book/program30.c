//write a program to interchange the content of a&b without using thread variable.
#include <stdio.h>
int main()
{ 	
	int a,b;
	
	printf("Enter The Value of (A) : ");
	scanf("%d",&a);
	printf("Enter The Value of (b) : ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("A=%d \t B=%d\n" ,a,b);
	return 0;
}	