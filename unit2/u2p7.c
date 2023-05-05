//Write a program to calculate the area of rectangle and square.
#include <stdio.h>
int main()
{
	float lenght,bresdhth,area;
	printf("Enter The Lenght Of Rectangle:");
	scanf("%f",&lenght);
	printf("Enter The Bresdhth Of Rectangle:");
	scanf("%f",&bresdhth);
	area=lenght*bresdhth;
	printf("Area of rectangle:%.2f\n",area);
    return 0;
}