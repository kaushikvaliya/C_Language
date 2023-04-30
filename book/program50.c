//wrote a program to calculate total expenses. A discount of 10% is offered if the quantity purchsed os more then 1000.
#include <stdio.h>
int main()
{
	int q,r,ans,net,net1;
	printf("Enter Reat :");
	scanf("%d",&r);
	printf("Enter Quantity :");
	scanf("%d",&q);
	net=r*q;
	printf("net:%d\n",net);
	if(net>=1000)
	{
		ans=net/10;
		net1=net-ans;
		printf("Discun( of 10 %) :%d\n",ans);
		printf("net :%d\n",net1);
	}
	else
	{
		printf("No discunt\n");
	}
	return 0;
}	