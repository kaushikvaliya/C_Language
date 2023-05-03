//write a program to calculate value of cube v= l*b*h.
#include <stdio.h>
int main()
{
	float l,b,h,v;
	
	printf("Enter lenght :");
	scanf("%f",&l);
	printf("Enter Breadth :");
	scanf("%f",&b);
	printf("Enter height :");
	scanf("%f",&h);
	v=l*b*h;
	printf("cube value of = %.2f\n",v);
	return 0;
}