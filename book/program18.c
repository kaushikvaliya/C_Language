//write a program to calcuiat value of cube v=l*b*h.
#include<stdio.h>
int main()
{
	float l,b,h,v;
	printf("Enter Length  : ");
    scanf("%f",&l);
	printf("Enter Breadth : ");
	scanf("%f",&b);
	printf("Enter Height  : ");
	scanf("%f",&h);
	v=l*b*h;
	printf("VOC: %.2f\n",v);
	return 0;
}		