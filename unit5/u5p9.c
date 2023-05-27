//Write a program to find the largest element of an Array.
#include <stdio.h>
int main()
{
	int arr[100],count=0,i,n;
	printf("Enter array value : ");
	scanf("%d",&n);
	printf("enter number\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]>count){
			count=arr[i];
		}
	}
	printf("largest number : %d\n",count);
	return 0;
}