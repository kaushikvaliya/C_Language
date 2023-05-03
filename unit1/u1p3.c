//write a program to calculate area of rectangle.
#include <stdio.h>
int main()
{
	float l,b,area;
	printf("Enter the lenght :");
	scanf("%f",&l);
	printf("Enter the Breadth:");
	scanf("%f",&b);
	area=l*b;
	printf("Area of rectangle:%.2f\n",area);
	return 0;
}