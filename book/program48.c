//write a program to print abosoiute valie of a number using if statement.
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	printf("enter any number :");
	scanf("%d",&num);
	if(num<0){
		num*=-1;
	}
	printf("abosoiute valie is : %d",num); 
	return 0;
}