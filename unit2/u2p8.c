//Write a program to find the Simple Interest.
#include <stdio.h>
int main()
{
	float p,y,r,net;
	printf("Enter your amaunt:");
	scanf("%f",&p);
	printf("Enter Year:");
	scanf("%f",&y);
	printf("Enter rate:");
	scanf("%f",&r);
	net=(p*y*r)/100;
	printf("Your amaunt :%.2f\n",net);
	return 0;
}