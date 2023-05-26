//Write a program to read and print two dimesional array.
#include <stdio.h>
int main()
{
	int a[5],b[5];
	int i,j;
	printf("Enter number\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
    }
	printf("Enter number\n");	
	for(j=0;j<5;j++){
		scanf("%d",&b[j]);	
	}
	printf("your first enter value\n");
	for(i=0;i<5;i++){
		printf("%d\n",a[i]);
	}
	printf("your second enter value\n");
	for(j=0;j<5;j++){
		printf("%d\n",b[j]);
	}
	return 0;
}	