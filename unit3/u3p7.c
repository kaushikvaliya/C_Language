/*Write a program to check whether the blood donor is eligible or not for 
donating blood. The conditions laid down are as under. Use if statement.
a) Age should be above 18 yrs but not more than 55 yrs.
b) Weight should be more than 45kgs*/
#include <stdio.h>
int main()
{
	int age,kgs;
	printf("enter your age:");
	scanf("%d",&age);
	printf("enter your weight:");
	scanf("%d",&kgs);
	if((age>=18)&&(age<55)&&(kgs>45))
	{
	   printf("you are eligible\n");
	}
	else
	{
	   printf("you are not eligible\n");
	}
	return 0;
}