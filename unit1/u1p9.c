//write a program to compute fahernheit from centigrade ( f= 1.8 * c +32).
#include <stdio.h>
int main()
{
	float f,c;
	
	printf("Enter centigrade:");
	scanf("%f",&c);
	f=1.8*c+32;
	printf("fahernheit : %.2f\n",f);
	return 0;
}