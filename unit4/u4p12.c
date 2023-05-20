//Write a program to find the sum of first 50 natural numbers using function.
#include <stdio.h>
int add();
int num;
int main()
{
    int sum = 0;
    for (num=1;num<=50;num++){
        sum+=num;
    }
    printf("Sum = %d\n",sum);
	return 0;
}