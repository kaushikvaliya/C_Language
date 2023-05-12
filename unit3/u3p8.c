/*Write a C Program to input gender and salary of an employee and check
whether salary of an employee is taxable or not.(Salary limit for Male : 
1,50,000 and for female : 1,80,000) [ Take input gender as ‘M’ or ‘F’ and
match that.]*/
#include<stdio.h>
int main()
{
	float salary;
	char gender;
	printf("Enter salary :");
	scanf("%f",&salary);
	printf("Enter gender :");
	scanf("%s",&gender);
	if (gender=='m' || gender=='M')
	{
		if(salary>=150000)
		{
			printf("Taxable\n");
		}
		else
		{
			printf("Not Taxable\n");
		}
	}
	else if(gender=='f' || gender=='F')
	{
		if (salary>=180000)
		{
			printf("Taxable\n");
		}
		else
		{
			printf("Not taxable\n");
		}
	}
	return 0;
}
