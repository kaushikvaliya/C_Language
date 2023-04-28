//write a program to print sum of these two in meters entered first number in kilometer and second on meter.
#include <stdio.h>
int main()
{
	float km,meter,sum;
	
	printf("Enter Kilometer :");
	scanf("%f" , &km);
	printf("Enter Meter : ");
	scanf("%f" , &meter);
	km=km*1000;
	sum=km+meter;
	printf("sum in meter = %.2f\n", sum);
	return 0;
}	