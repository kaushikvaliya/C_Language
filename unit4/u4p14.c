//Write a program to find area of circle using function.
#include <stdio.h>
int ma();
float redus;
int main()
{
	printf("Enter radius of the circle:");
	scanf("%f",&redus);
	ma();
	return 0;
}
int ma()
{
	float r;
	r=redus*redus*3.14;
	printf("Area of the circle = %.2f\n",r);
}