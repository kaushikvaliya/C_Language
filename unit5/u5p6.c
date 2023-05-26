//Write a program to read and print three dimesional array.
#include <stdio.h>
int main()
{
	int a[5],b[5],c[5];
	int i,k,j;
	printf("Enter number\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter number\n");
	for(k=0;k<5;k++){
		scanf("%d",&b[k]);
	}
	printf("Enter number\n");
	for(j=0;j<5;j++){
		scanf("%d",&c[j]);
	}
	
	printf("first enter value\n");
	for(i=0;i<5;i++){
		printf("%d\n",a[i]);
	}
	printf("second enter value\n");
	for(k=0;k<5;k++){
		printf("%d\n",b[k]);
	}
	printf("thard enter value\n");
	for(j=0;j<5;j++){
		printf("%d\n",c[j]);
	}
	return 0;
}