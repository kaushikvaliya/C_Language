//Write a program to implement calculator using switch case.
#include <stdio.h>
int main()
{
	int a,b;
	float result;
	char op;
	printf("Enter 1 Number :");
	scanf("%d", &a);
	printf("Enter 2 Number :");
	scanf("%d", &b);
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
			result =a/(float)b;
			break;
		default:
		printf("Invalide operation.\n");
		break;
	}
	printf("result=%.2f\n",result);
	return 0;
}