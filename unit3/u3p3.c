//Write a program to check whether the given number is positive or negative.
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    if(num>0){
      printf("%d is posiitive number\n",num);
    }
    else if(num<0)
    {
	    printf("%d is negative number\n",num);
    }
  return 0;
}