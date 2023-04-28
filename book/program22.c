//write a program to find volume of Cylinder(vol=pi*r2*h).
#include <stdio.h>

int main()
{ 
	float radius,height,volume,pi=3.14;
	printf("Enter Radius :");
	scanf("%f" , &radius);
	printf("Enter Height :");
	scanf("%f" , &height);
	volume=pi*radius*radius*height;
	printf("Volume of Cylinder is : %.2f\n" , volume);
	return 0;
}	
	