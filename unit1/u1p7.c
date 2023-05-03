//write a program to calculate 5% Bonus of Salary.
#include <stdio.h>
int main()
{
	float salary,bonus;
	
	printf("Enter salary :");
	scanf("%f",&salary);
	bonus=(salary*0.05);
	printf("Your bonus is = %.2f\n",bonus);
	
	return 0;
}