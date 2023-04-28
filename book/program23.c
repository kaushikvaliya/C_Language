//writr a program to convert fahrenheit from Centigrade(f=1.8*c+32)
#include <stdio.h>
int main()
{	
	float f,c;
	printf("Enter Centigrade :");
	scanf("%f",&c);
	f=(1.8*c+32);
	printf("fahrenheit is :%.2f\n",f);
	return 0;
}	