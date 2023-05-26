//Write a program to print three dimesional array.
#include <stdio.h> 
int main() 
{
	int a[5];
	int i,k,j;
	
	printf("Enter number\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter number\n");
	for(k=0;k<5;k++){
		scanf("%d",&a[k]);
	}
	printf("Enter number\n");
	for(j=0;j<5;j++){
		scanf("%d",&a[j]);
	}
	return 0;
}