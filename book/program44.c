//Simple calculator using Switch.
#include <stdio.h>
int main()
{
	float result,a,b;
	char ch;
	
	printf("Enter first number :");
	scanf("%f",&a);
	printf("Enter second number :");
	scanf("%f",&b);
	fflush(stdout);
	getchar();
	printf("Enter operator (-,+,*,/):");
	scanf("%c",&ch);
	switch(ch)
	{
		case'+':
		    result=a+b;
		    break;
		case'-':
		    result=a-b;
		    break;
		case'*':
		    result=a*b;
		    break;
		case'/':
		    result=a/b;
		    break;
		default:
		    printf("not match");
	}
		printf("Result=%.2f\n",result);
		return 0;
}	