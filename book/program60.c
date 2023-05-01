//write a program convert fahrenheit temperature into centigrade temperature.

#include <stdio.h>
int main()
{
	float f,c;
	
	printf("Enter the temperature in centigrade:");
	scanf("%f",&c);
	f=(1.8*c)+32;
	printf("temperature in fahrenheit is :%.2f\n",f);
	return 0;
}