//Write a program to Add of two Arrays and store value in third array.
#include <stdio.h>
int main()
{
	int arr1[5],arr2[5],sum[5],i;
	
	printf("Enter Number Array 1.\n");
	for(i=1;i<=5;i++){
		printf("arr1[%d]=",i);
		scanf("%d",&arr1[i]);
	}
	printf("Enter Number Array 2.\n");
	for(i=1;i<=5;i++){
		printf("arr2[%d]=",i);
		scanf("%d",&arr2[i]);
	}
	for(i=1;i<=5;i++){
		sum[i]=arr1[i]+arr2[i];
	}
	printf("Sum Of Array\n");
	for(i=1;i<=5;i++){
		printf("sum[%d]=%d\n",i,sum[i]);
	}
	return 0;
}