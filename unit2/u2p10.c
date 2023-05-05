//Write a program to convert the temperature from degree centigrade to Fahrenheit.[C = ((F32)*5)/9].
//u->2/program=10
#include <stdio.h>
int main()
{
	float f,c;
	
	printf("Enter the Temperature in Centigrade: ");
    scanf("%f",&c);
    f=(1.8*c)+32;
    printf("Temparature in Fahrenheit is : %.2f\n",f);
	return 0;
}