//Write a Program to multiply two Floating Point Numbers.
#include <stdio.h>
int main()
{
	float a,b,net;
	printf("Enter numner 1 :");
	scanf("%f",&a);
	printf("Enter numner 2 :");
	scanf("%f",&b);
	net=a*b;
	printf("%.2f*%.2f=%.2f\n",a,b,net);
	return 0;
}
	