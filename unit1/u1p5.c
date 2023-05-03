//write a program to find area of triangle area = h * b* 0.5.
#include <stdio.h>
int main()
{
	float h,b,p=0.5,area;
	
	printf("Enter Hight :");
	scanf("%f",&h);
	printf("Enter Breadth :");
	scanf("%f",&b);
	area=h*b*p;
	printf("triangle area :%.2f\n",area);
	
	return 0;	
}
