//Write a program to check whether the given number is odd or even.
#include<stdio.h>
int main()
{
      int number;
      printf("enter number:");
      scanf("%d",&number);
      if(number%2==0)
      {
	      printf("number is even\n");
      }
      else
      {
	      printf("number is odd\n");
      }
      return 0;
}
