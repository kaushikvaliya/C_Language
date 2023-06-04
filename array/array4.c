#include <stdio.h>
int main()
{
	int arr[100],size,i,sum=0;
	
	printf("Enter array size:");
	scanf("%d",&size);
	printf("Enter array elements\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("Sum of the array = %d\n",sum);
	return 0;	
}