//Write a program to calculate the area and circumference of a circle.
#include <stdio.h>
int main()
{
	float redius,circum,pi=3.14;
	printf("Enter redius:");
	scanf("%f",&redius);
	circum=(pi*redius*redius);
	printf("circumference of circle=%.2f\n",circum);
	return 0;
}	