//Write a Program to Check Whether a Number is Prime or Not.
#include <stdio.h>
int main()
{
	int n,i=1,count=0;
	printf("Enter number:");
	scanf("%d",&n);
	for (i=1;i<= n;i++){
        if (n % i == 0){
            count++;
        }
    }
    if(count==2)
    {
        printf("prime number\n");
    }
    else
    {
        printf("not prime number\n");
    }
    return 0;
}