//write a program to calculate simple interest.
#include <stdio.h>
int main()
{
	float p,y,r,net;
	
	printf("Enter Amaunt :");
	scanf("%f",&p);
	printf("Enter year :");
	scanf("%f",&y);
	printf("Enter reat :");
	scanf("%f",&r);
	net=(p*y*r)/100;
	printf("Your interest Amaunt =%.2f\n",net);
	return 0;
}