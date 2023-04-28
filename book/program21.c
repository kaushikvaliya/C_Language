//write a program to calculate 5% bonus of salary.
#include <stdio.h>
int main()
{
	float s,b;
	printf("Enter your Salary :");
	scanf("%f",&s);
	b=s*0.05;
    printf("Bonus : %.2f\n",b);
	return 0;
}	