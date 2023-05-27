//Write a program to calculate average using Array
#include <stdio.h>
int main()
{
	int a[20],i,n,ans=0;
	float per;
	
	printf("Enter array value :");
	scanf("%d",&n);
	printf("Enter number\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		ans +=a[i];
	}
	printf("total : %d\n",ans);
	per=ans/n;
	printf("average is : %.2f\n",per);
	return 0;
}