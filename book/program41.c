//simple calculator.
#include <stdio.h>
int main()
{
	
	float result,a,b;
	char op;
	 
	printf("Enter 1 Number :");
	scanf("%f", &a);
	printf("Enter 2 Number :");
	scanf("%f", &b);
	fflush(stdout);
	getchar();
	printf("Enter operator(+,-,*,/):");
	scanf("%c", &op);
	switch(op)
	{
		case'+':
			result =a+b;
			break;
			
		case'-':	
			result =a-b;
			break;
			
		case'*':
			result =a*b;
			break;
			
		case'/':
			result =a/b;
			break;
			
		default:
			
		printf("Invalide operation.\n");
		break;
	}
			printf("result=%.2f\n",result);
	return 0;	
}