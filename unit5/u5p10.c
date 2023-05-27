/*Write a program to enter five numbers using array and rearrange the array in
the reverse order*/
#include <stdio.h>
int main()
{
	int a[100];
	int n,i;
	printf("Enter size of the array:");
	scanf("%d",&n);
	printf("Enter array\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("revers array\n");
	for(i=n-1;i>=0;i--){
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}	