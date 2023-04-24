//write a program in which three variable are assigned number 1; number 2; y
//using logical NOT and find which number is greater 1 number 1 or number 2.y=(num1>num2! __:__).
#include <stdio.h>
int main()
{
	int num1,num2,y;
	
	printf("Enter num1 :");
	scanf("%d" , &num1);
	printf("Enter num2 :");
	scanf("%d" , &num2);
	y=(num1>num2?10:20);
	printf("y:%d\n" ,y);
	return 0;
}	