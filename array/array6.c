#include <stdio.h>
int main()
{
	int kaushik1[5],kaushik2[5],kaushik3[5];
	int i,sum1=0,sum2=0,sum3=0,sum4=0;
	int total=500;
	float per1,per2,per3;
	
	int suchi1[5],suchi2[5],suchi3[5];
	int s,s1=0,s2=0,s3=0,s4=0;
	int total2=500;
	float u1,u2,u3;
	
	int ketan1[5],ketan2[5],ketan3[5];
	int k,k1=0,k2=0,k3=0,k4=0;
	int total3=500;
	float e1,e2,e3;  
	
	int mayur1[5],mayur2[5],mayur3[5];
	int m,m1=0,m2=0,m3=0,m4=0;
	int total4=500;
	float y1,y2,y3;  

	int alpesh1[5],alpesh2[5],alpesh3[5];
	int a,a1=0,a2=0,a3=0,a4=0;
	int total5=500;
	float l1,l2,l3; 
	
	//kaushik

	printf("Enter marks  kaushik semester  1 \n");
	for(i=0;i<5;i++){
		scanf("%d",&kaushik1[i]);		
		sum1+=kaushik1[i];
	}
	per1=(sum1*100)/total;
	
	printf("Enter marks kaushik semester 2 \n");
		for(i=0;i<5;i++){
		scanf("%d",&kaushik2[i]);
		sum2+=kaushik2[i];
	}
	per2=(sum2*100)/total;
	
	printf("Enter marks kaushik semester 3 \n");
	for(i=0;i<5;i++){
		scanf("%d",&kaushik3[i]);
		sum3+=kaushik3[i];
	}
	per3=(sum3*100)/total;
	
	printf("kaushik Semester 1 Total marks = %d\n",sum1);
	printf("kaushik Semester 1 percentage =%.2f\n",per1);
	if(per1>=0 && per1<=34)
	{
		printf("fail\n");
	}
	else if(per1>=35 && per1<50)
	{
		printf("pass\n");
	}
	else if (per1>=50 && per1<60)
	{
		printf("Grade : D\n");
	}
	else if(per1>=60 && per1<70)
	{
		printf("Grade : C\n");
	}
	else if(per1>=70 && per1<80)
	{
		printf("Grade : B\n");
	}
	else if(per1>=80&& per1<100)
	{
		printf("Grade : A\n");
	}
	
	printf("kaushik Semester 2 Total marks = %d\n",sum2);
	printf("kaushik Semester 2 percentage =%.2f\n",per2);
	if(per2>=0 && per2<=34)
	{
		printf("fail\n");
	}	
	else if(per2>=35 && per2<50)
	{
		printf("pass\n");
	}
	else if (per2>=50 && per2<60)
	{
		printf("Grade : D\n");
	}
	else if(per2>=60 && per2<70)
	{
		printf("Grade : C\n");
	}
	else if(per2>=70 && per2<80)
	{
		printf("Grade : B\n");
	}
	else if(per2>=80&& per2<100)
	{
		printf("Grade : A\n");
	}
	
	printf("kaushik Semester 3 Total marks = %d\n",sum3);
	printf("kaushik Semester 3 percentage =%.2f\n",per3);
	if(per3>=0 && per3<=34)
	{
		printf("fail\n");
	}	
	else if(per3>=35 && per3<50)
	{
		printf("pass\n");
	}
	else if (per3>=50 && per3<60)
	{
		printf("Grade : D\n");
	}
	else if(per3>=60 && per3<70)
	{
		printf("Grade : C\n");
	}
	else if(per3>=70 && per3<80)
	{
		printf("Grade : B\n");
	}
	else if(per3>=80&& per3<100)
	{
		printf("Grade : A\n");
	}

	sum4=sum1+sum2+sum3;
	printf("total marks of kaushik=%d\n",sum4);   
	
	//suchi
	
	printf("Enter marks  suchi	semester  1 \n");
	for(s=0;s<5;s++){
		scanf("%d",&suchi1[s]);
		s1+=suchi1[s];
	}
	u1=(s1*100)/total2;
	
	printf("Enter marks suchi semester 2 \n");
	for(s=0;s<5;s++){
		scanf("%d",&suchi2[s]);
		s2+=suchi2[s];
	}
	u2=(s2*100)/total2;
	
	printf("Enter marks suchi semester 3 \n");
	for(s=0;s<5;s++){
		scanf("%d",&suchi3[s]);
		s3+=suchi3[s];
	}
	u3=(s3*100)/total2;
	
	printf("suchi Semester 1 Total marks = %d\n",s1);
	printf("suchi Semester 1 percentage =%.2f\n",u1);
	if(u1>=0 && u1<=34)
	{
		printf("fail\n");
	}	
	else if(u1>=35 && u1<50)
	{
		printf("pass\n");
	}
	else if (u1>=50 && u1<60)
	{
		printf("Grade : D\n");
	}
	else if(u1>=60 && u1<70)
	{
		printf("Grade : C\n");
	}
	else if(u1>=70 && u1<80)
	{
		printf("Grade : B\n");
	}
	else if(u1>=80&& u1<100)
	{
		printf("Grade : A\n");
	}
	
	printf("suchi Semester 2 Total marks = %d\n",s2);
	printf("suchi Semester 2 percentage =%.2f\n",u2);
	
	if(u2>=0 && u2<=34)
	{
		printf("fail\n");
	}	
	else if(u2>=35 && u2<50)
	{
		printf("pass\n");
	}
	else if (u2>=50 && u2<60)
	{
		printf("Grade : D\n");
	}
	else if(u2>=60 && u2<70)
	{
		printf("Grade : C\n");
	}
	else if(u2>=70 && u2<80)
	{
		printf("Grade : B\n");
	}
	else if(u2>=80&& u2<100)
	{
		printf("Grade : A\n");
	}
	
	printf("suchi Semester 3 Total marks = %d\n",s3);
	printf("suchi Semester 3 percentage =%.2f\n",u3);
	if(u3>=0 && u3<=34)
	{
		printf("fail\n");
	}	
	else if(u3>=35 && u3<50)
	{
		printf("pass\n");
	}
	else if (u3>=50 && u3<60)
	{
		printf("Grade : D\n");
	}
	else if(u3>=60 && u3<70)
	{
		printf("Grade : C\n");
	}
	else if(u3>=70 && u3<80)
	{
		printf("Grade : B\n");
	}
	else if(u3>=80&& u3<100)
	{
		printf("Grade : A\n");
	}
	s4=s1+s2+s3;
	printf("total marks of suchi=%d\n",s4);  
	
	//ketan1
	
	printf("Enter marks ketan semester  1 \n");
	for(k=0;k<5;k++){
		scanf("%d",&ketan1[k]);
		k1+=ketan1[k];
	}
	e1=(k1*100)/total3;
	
	printf("Enter marks ketan semester 2 \n");
	for(k=0;k<5;k++){
		scanf("%d",&ketan2[k]);
		k2+=ketan2[k];
	}
	e2=(k2*100)/total3;
	
	printf("Enter marks suchi semester 3 \n");
	for(k=0;k<5;k++){
		scanf("%d",&ketan3[k]);
		k3+=ketan3[k];
	}
	e3=(k3*100)/total3;
	
	printf("ketan Semester 1 Total marks = %d\n",k1);
	printf("ketan Semester 1 percentage =%.2f\n",e1);
	if(e1>=0 && e1<=34)
	{
		printf("fail\n");
	}
		
	else if(e1>=35 && e1<50)
	{
		printf("pass\n");
	}
	else if (e1>=50 && e1<60)
	{
		printf("Grade : D\n");
	}
	else if(e1>=60 && e1<70)
	{
		printf("Grade : C\n");
	}
	else if(e1>=70 && e1<80)
	{
		printf("Grade : B\n");
	}
	else if(e1>=80&& e1<100)
	{
		printf("Grade : A\n");
	}
	
	printf("ketan Semester 2 Total marks = %d\n",k2);
	printf("ketan Semester 2 percentage =%.2f\n",e2);
	
	if(e2>=0 && e2<=34)
	{
		printf("fail\n");
	}	
	else if(e2>=35 && e2<50)
	{
		printf("pass\n");
	}
	else if (e2>=50 && e2<60)
	{
		printf("Grade : D\n");
	}
	else if(e2>=60 && e2<70)
	{
		printf("Grade : C\n");
	}
	else if(e2>=70 && e2<80)
	{
		printf("Grade : B\n");
	}
	else if(e2>=80&& e2<100)
	{
		printf("Grade : A\n");
	}
	
	printf("ketan Semester 3 Total marks = %d\n",k3);
	printf("ketan Semester 3 percentage =%.2f\n",e3);
	
	if(e3>=0 && e3<=34)
	{
		printf("fail\n");
	}	
	else if(e3>=35 && e3<50)
	{
		printf("pass\n");
	}
	else if (e3>=50 && e3<60)
	{
		printf("Grade : D\n");
	}
	else if(e3>=60 && e3<70)
	{
		printf("Grade : C\n");
	}
	else if(e3>=70 && e3<80)
	{
		printf("Grade : B\n");
	}
	else if(e3>=80&& e3<100)
	{
		printf("Grade : A\n");
	}

	k4=k1+k2+k3;
	printf("total marks of ketan=%d\n",k4);   
	
	//mayur
	
	printf("Enter marks mayur semester  1 \n");
	for(m=0;m<5;m++){
		scanf("%d",&mayur1[m]);
		m1+=mayur1[m];
	}
	y1=(m1*100)/total4;
	
	printf("Enter marks mayur semester 2 \n");
	for(m=0;m<5;m++){
		scanf("%d",&mayur2[m]);
		m2 +=mayur2[m];
	}
	y2=(m2*100)/total4;
	
	printf("Enter marks mayur semester 3 \n");
	for(m=0;m<5;m++){
		scanf("%d",&mayur3[m]);
		m3 +=mayur3[m];
	}
	y3=(m3*100)/total4;	
	
	printf("mayur Semester 1 Total marks = %d\n",m1);
	printf("mayur Semester 1 percentage =%.2f\n",y1);
	if(a1>=0 && a1<=34)
	{
		printf("fail\n");
	}	
	else if(y1>=35 && y1<50)
	{
		printf("pass\n");
	}
	else if (y1>=50 && y1<60)
	{
		printf("Grade : D\n");
	}
	else if(y1>=60 && y1<70)
	{
		printf("Grade : C\n");
	}
	else if(y1>=70 && y1<80)
	{
		printf("Grade : B\n");
	}
	else if(y1>=80&& y1<100)
	{
		printf("Grade : A\n");
	}
	
	printf("mayur Semester 2 Total marks = %d\n",m2);
	printf("mayur Semester 2 percentage =%.2f\n",y2);
	
	if(y2>=0 && y2<=34)
	{
		printf("fail\n");
	}	
	else if(y2>=35 && y2<50)
	{
		printf("pass\n");
	}
	else if (y2>=50 && y2<60)
	{
		printf("Grade : D\n");
	}
	else if(y2>=60 && y2<70)
	{
		printf("Grade : C\n");
	}
	else if(y2>=70 && y2<80)
	{
		printf("Grade : B\n");
	}
	else if(y2>=80&& y2<100)
	{
		printf("Grade : A\n");
	}
	
	printf("mayur Semester 3 Total marks = %d\n",m3);
	printf("mayur Semester 3 percentage =%.2f\n",y3);
	
	if(y3>=0 && y3<=34)
	{
		printf("fail\n");
	}	
	else if(y3>=35 && y3<50)
	{
		printf("pass\n");
	}
	else if (y3>=50 && y3<60)
	{
		printf("Grade : D\n");
	}
	else if(y3>=60 && y3<70)
	{
		printf("Grade : C\n");
	}
	else if(y3>=70 && y3<80)
	{
		printf("Grade : B\n");
	}
	else if(y3>=80&& y3<100)
	{
		printf("Grade : A\n");
	}

	m4=m1+m2+m3;
	printf("total marks of mayur=%d\n",m4);   
	
	//alpesh
	
	printf("Enter marks alpesh semester  1 \n");
	for(a=0;a<5;a++){
		scanf("%d",&alpesh1[a]);
		a1+=alpesh1[a];
	}
	l1=(a1*100)/total5;
	
	printf("Enter marks alpesh semester 2 \n");
	for(a=0;a<5;a++){
		scanf("%d",&alpesh2[a]);
		a2 +=alpesh2[a];
	}
	l2=(a2*100)/total5;
	
	printf("Enter marks alpesh semester 3 \n");
	for(a=0;a<5;a++){
		scanf("%d",&alpesh3[a]);
		a3 +=alpesh3[a];
	}
	l3=(a3*100)/total5;
	
	printf("alpesh Semester 1 Total marks = %d\n",a1);
	printf("alpesh Semester 1 percentage =%.2f\n",l1);
	if(l1>=0 && l1<=34)
	{
		printf("fail\n");
	}
		
	else if(l1>=35 && l1<50)
	{
		printf("pass\n");
	}
	else if (l1>=50 && l1<60)
	{
		printf("Grade : D\n");
	}
	else if(l1>=60 && l1<70)
	{
		printf("Grade : C\n");
	}
	else if(l1>=70 && l1<80)
	{
		printf("Grade : B\n");
	}
	else if(l1>=80&& l1<100)
	{
		printf("Grade : A\n");
	}
	
	printf("alpesh Semester 2 Total marks = %d\n",a2);
	printf("alpesh Semester 2 percentage =%.2f\n",l2);
	
	if(l2>=0 && l2<=34)
	{
		printf("fail\n");
	}	
	else if(l2>=35 && l2<50)
	{
		printf("pass\n");
	}
	else if (l2>=50 && l2<60)
	{
		printf("Grade : D\n");
	}
	else if(l2>=60 && l2<70)
	{
		printf("Grade : C\n");
	}
	else if(l2>=70 && l2<80)
	{
		printf("Grade : B\n");
	}
	else if(l2>=80&& l2<100)
	{
		printf("Grade : A\n");
	}
	
	printf("alpesh Semester 3 Total marks = %d\n",a3);
	printf("alpesh Semester 3 percentage =%.2f\n",l3);
	
	if(l3>=0 && l3<=34)
	{
		printf("fail\n");
	}	
	else if(l3>=35 && l3<50)
	{
		printf("pass\n");
	}
	else if (l3>=50 && l3<60)
	{
		printf("Grade : D\n");
	}
	else if(l3>=60 && l3<70)
	{
		printf("Grade : C\n");
	}
	else if(l3>=70 && l3<80)
	{
		printf("Grade : B\n");
	}
	else if(l3>=80&& l3<100)
	{
		printf("Grade : A\n");
	}
	a4=a1+a2+a3;
	printf("total marks of mayur=%d\n",a4);    
	return 0;	
}