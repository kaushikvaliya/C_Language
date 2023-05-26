//Write a program to Copy Elements of Array in another Array.
#include <stdio.h>
int main()
{
	int a[5],b[5];
	int i;
	
	for(i=0;i<5;i++){
		printf("element = %d :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		b[i]=a[i];
	}
	printf("your enter array\n");
	for(i=0;i<5;i++){
		printf("%d\t",a[i]);
	}
	
	printf("\nelement copied array\n");
	for(i=0;i<5;i++){
		printf("%d\t",b[i]);
	}
	printf("\n");
	return 0;
}	