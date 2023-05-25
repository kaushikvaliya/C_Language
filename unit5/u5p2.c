// Write a program to read and print single dimesional array.
#include <stdio.h>
int main()
{
	int a[10];
	int i,n;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter number\n");
	for (i=0;i<n;i++){
	    scanf("%d",&a[i]);
	}
	printf("Your Enter no is \n");
	for (i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
	