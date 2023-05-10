//codeitup
//Write a program to enter two numbers and find the smallest out of them.


#include<stdio.h>
int main()
{
     int n1,n2;
     printf("enter value of n1:");
     scanf("%d",&n1);
     printf("enter value of n2:");
     scanf("%d",&n2);
     if(n1<n2){
	     printf("smallest number is :%d\n",n1);
     }
     if(n1>n2){
	     printf("smallest number is :%d\n",n2);
     }
     return 0;
}