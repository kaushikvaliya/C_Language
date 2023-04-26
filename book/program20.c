//write a program to simple interest.
#include <stdio.h>
int main()
{
	float p, y, r, net;
	
	printf("Enter your amaunt :");
	scanf("%f", & p);
	printf("Enter year :");	
	scanf("%f", & y);
	printf("Enter rate :");
	scanf("%f" , & r);
	net=(p*y*r)/100;
	printf("your interest : %.2f\n",net);
	return 0;
} 