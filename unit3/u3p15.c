//Write a program to Calculate the Power of a Number.
#include <stdio.h>
int main()
{
	int x,y;
	long pro=1;
	printf("Enter a base number :");
	scanf("%d",&x);
	printf("Enter a exponent number :");
	scanf("%d",&y);
	while(y>0){	
		pro=pro*x;
		y--;
	}
	printf("value=%ld\n",pro);	
	return 0;
}
	