//Enter marks of five subjects to ger grade by using following equation.
//percent=(mk1+mk2+mk3+mk4+mk5)/5.
#include <stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,sum,total=500;
	float per;
	
	printf("Enter subject 1 mark :");
	scanf("%d",&s1);
	printf("Enter subject 2 mark :");
	scanf("%d",&s2);
	printf("Enter subject 3 mark :");
	scanf("%d",&s3);
	printf("Enter subject 4 mark :");
	scanf("%d",&s4);
	printf("Enter subject 5 mark :");
	scanf("%d",&s5);
	sum=s2+s2+s3+s4+s5;
	printf("Sum Of THe 5 subjects :%d\n",sum);
	per=(sum*100)/total;
	printf("percent is :%.2f\n",per);
	if(per>=0 && per<=34)
	{
		printf("fail\n");
	}
	else if(per>=35 && per<50)
	{
		printf("pass\n");
	}
	else if (per>=50 && per<60)
	{
		printf("Grade : D\n");
	}
	else if(per>=60 && per<70)
	{
		printf("Grade : C\n");
	}
	else if(per>=70 && per<80)
	{
		printf("Grade : B\n");
	}
	else if(per>=80&& per<100)
	{
		printf("Grade : A\n");
	}
	return 0;
}