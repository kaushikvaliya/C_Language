 /*A company has following scheme of payment to their staff
 netsal = gross sal - deduction
 gross sal = basic+ hra+ da+ medical
 deduction = insurance+pf
 da = 40% basic, hra = 10%basic , medical= 5%basic
 pf = 5% of gross sal, insurance = 7% of gross sal
 write a program to calulate net payment to any employee*/
#include <stdio.h>
int main() 
{
	float net,gross,basic,hra,da,ins,pf,madical,ded;
	
	printf("Enter Basic salary :");
	scanf("%f",&basic);
	da=0.4*basic;
	hra=0.1*basic;
	madical=0.05*basic;
	gross=basic+da+hra+madical;
	pf=0.05*gross;
	ins=0.07*gross;
	ded=ins+pf;
	net=gross-ded;
	printf("Net salary=%.2f\n",net);
	return 0;
}