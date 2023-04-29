//write a program to calculate your age and years in days.
#include <stdio.h>
int main()
{
	int y,d;
	printf("Enter your Age :");
	scanf("%d" , &y);
	d=y*365;
	printf("You are %d day old.\n",d);
	return 0;
}	
	