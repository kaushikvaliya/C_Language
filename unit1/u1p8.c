//write a program to find voulme of a cylinder (vol = pi*r2*h).
#include <stdio.h>
int main()
{
	float r,h,voulme,pi=3.14;
	printf("Enter redius :");
	scanf("%f",&r);
	printf("Enter Heihgt :");
	scanf("%f",&h);
	voulme=r*r*h*pi;
	printf("voulme cylinder =%.2f\n",voulme);
	return 0;
}
	