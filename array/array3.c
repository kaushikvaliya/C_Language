#include <stdio.h>
int main()
{
	int a[5];
	int v,i;
	printf("Enter valu of number :");
	scanf("%d",&v);
	printf("Enter number\n");
	for(i=0;i<v;i++){
		scanf("%d",&a[i]);
	}
	printf("your enter number is \n");
	for(i=0;i<v;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}