#include <stdio.h>
int main()
{
	int sal,net,hra,da;
	printf("Enter salary :");
	scanf("%d",&sal);
	
	if(sal>=25000){
		hra=sal*0.15;
		da=sal*0.25;
		net=sal+hra+da;
		printf("net salary=%d\n",net);
	}
	else if(sal>10000  && sal<25000){
		hra=sal*0.08;
		da=sal*0.12;
		net=sal+hra+da;
		printf("net salary=%d\n",net);
	}
	else if(1000<=sal){
		hra=sal*0.05;
		da=sal*0.10;
		net=sal+hra+da;
		printf("net salary=%d\n",net);
	}
	
	return 0;
}