//write a program to display of given value.
#include <stdio.h>
int main()
{
	int num;
    printf("Enter any number to store in (num) variable:");
    scanf("%d", &num);
    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", &num);
    
	return 0;
}	