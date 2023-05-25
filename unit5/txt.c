#include <stdio.h>
int main()
{
	int a[5];
	int i,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,
	sum9=0,sum10=0,sum11=0,sum12=0,sum13=0,sum14=0,sum15=0;
	int total1,total2,total3,total4,total5,kaushik;
	float per;
	
	printf("Enter mark kaushik\n");
	printf("Enter sem 1 marks\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		sum1 +=a[i];
	}
	printf("Enter sem 2 marks\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		sum2 +=a[i];
	}
	printf("Enter sem 3 malks\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		sum3 +=a[i];
	}
	printf("kaushik semester 1 total marks : %d\n",sum1);
	per=(sum1*100)/500;
	printf("kaushik semester 1 percentage : %.2f\n",per);
	if(per>=0 && per<=34)
	{
		printf("file\n");
	}
else if(per>=35 && per<=59)
	{
		printf("pass\n");
	}
else if (per>=60 && per<=79)
	{
		printf("grade=B\n");
	}
else if (per>=80 && per<=100)
	{
		printf("grade=A\n");
	}
	printf("kaushik semester 2 total marks : %d\n",sum2);
	per=(sum2*100)/500;
	printf("kaushik semester 2 percentage : %.2f\n",per);
	if(per>=0 && per<=34){
		printf("file\n");
	}
else if(per>=35 && per<=59){
		printf("pass\n");
	}
else if (per>=60 && per<=79){
		printf("grade=B\n");
	}
else if (per>=80 && per<=100){
		printf("grade=A\n");
	}
	printf("kaushik semester 3 total marks : %d\n",sum3);
	per=(sum3*100)/500;
	printf("kaushik semester 3 percentage : %.2f\n",per);
	if(per>=0 && per<=34)
	{
		printf("file\n");
	}
else if(per>=35 && per<=59)
	{
		printf("pass\n");
	}
else if (per>=60 && per<=79)
	{
		printf("grade=B\n");
	}
else if (per>=80 && per<=100)
	{
		printf("grade=A\n");
	}
	total1=sum1+sum2+sum3;
	printf("Total malks of kaushik:%d\n",total1);
	printf("\n");
	printf("-----------------\n");
	//ketan====================================
	printf("Enter mark ketan\n");
	printf("Enter sem 1 marks\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		sum4 +=a[i];
	}
	printf("Enter sem 2 marks\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		sum5 +=a[i];
	}
	printf("Enter sem 3 malks\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		sum6 +=a[i];
	}
	printf("ketan semester 1 total marks : %d\n",sum4);
	per=(sum4*100)/500;
	printf("ketan semester 2 percentage :%.2f\n",per);
	if(per>=0 && per<=34)
	{
		printf("file\n");
	}
else if(per>=35 && per<=59)
	{
		printf("pass\n");
	}
else if (per>=60 && per<=79)
	{
		printf("grade=B\n");
	}
else if (per>=80 && per<=100)
	{
		printf("grade=A\n");
	}
	printf("ketan semester 2 total marks : %d\n",sum5);
	per=(sum5*100)/500;
	printf("ketan semester 2 percentage :% .2f\n",per);
	if(per>=0 && per<=34)
	{
		printf("file\n");
	}
else if(per>=35 && per<=59)
	{
		printf("pass\n");
	}
else if (per>=60 && per<=79)
	{
		printf("grade=B\n");
	}
else if (per>=80 && per<=100)
	{
		printf("grade=A\n");
	}
	printf("ketan semester 3 total marks : %d\n",sum6);
	per=(sum6*100)/500;
	printf("ketan semester 3 percentage :%.2f\n",per);
	if(per>=0 && per<=34)
	{
		printf("file\n");
	}
else if(per>=35 && per<=59)
	{
		printf("pass\n");
	}
else if (per>=60 && per<=79)
	{
		printf("grade=B\n");
	}
else if (per>=80 && per<=100)
	{
		printf("grade=A\n");
	}
	total2=sum4+sum5+sum6;
	printf("Total marks of ketan :%d\n",total2);
	printf("\n");
	
	printf("-----------------\n");
	//suchi===================================
	printf("Enter mark suchi\n");
	printf("Enter sem 1 marks\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		sum7 +=a[i];
	}
	printf("Enter sem 2 marks\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		sum8 +=a[i];
	}
	printf("Enter sem 3 malks\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		sum9 +=a[i];
	}
	printf("suchi semester 1 total marks : %d\n",sum7);
	per=(sum7*100)/500;
	printf("suchi semester 1 percentage :%.2f\n",per);
	if(per>=0 && per<=34)
	{
		printf("file\n");
	}
else if(per>=35 && per<=59)
	{
		printf("pass\n");
	}
else if (per>=60 && per<=79)
	{
		printf("grade=B\n");
	}
else if (per>=80 && per<=100)
	{
		printf("grade=A\n");
	}
	printf("suchi semester 2 total mark : %d\n",sum8);
	per=(sum8*100)/500;
	printf("suchi semester 2 percentage :%.2f\n",per);
	if(per>=0 && per<=34)
	{
		printf("file\n");
	}
else if(per>=35 && per<=59)
	{
		printf("pass\n");
	}
else if (per>=60 && per<=79)
	{
		printf("grade=B\n");
	}
else if (per>=80 && per<=100)
	{
		printf("grade=A\n");
	}
	printf("suchi semester 3 total marks : %d\n",sum9);
	per=(sum9*100)/500;
	printf("suchi semester 3 percentage : %.2f\n",per);
	
	if(per>=0 && per<=34)
	{
		printf("file\n");
	}
else if(per>=35 && per<=59)
	{
		printf("pass\n");
	}
else if (per>=60 && per<=79)
	{
		printf("grade=B\n");
	}
else if (per>=80 && per<=100)
	{
		printf("grade=A\n");
	}
	total3=sum7+sum8+sum9;
	printf("Total mark of suchi : %d\n",total3);
	printf("-----------------\n");	
	//mayur=================================== 
	printf("Enter mark mayur\n");
	printf("Enter sem 1 marks\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		sum10 +=a[i];
	}
	printf("Enter sem 2 marks\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		sum11 +=a[i];
	}
	printf("Enter sem 3 malks\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		sum12 +=a[i];
	}
	printf("mayur semester 1 total marks : %d\n",sum10);
	per=(sum10*100)/500;
	printf("mayur semester 1 percentage : %.2f\n",per);
	if(per>=0 && per<=34)
	{
		printf("file\n");
	}
else if(per>=35 && per<=59)
	{
		printf("pass\n");
	}
else if (per>=60 && per<=79)
	{
		printf("grade=B\n");
	}
else if (per>=80 && per<=100)
	{
		printf("grade=A\n");
	}
	printf("mayur semester 2 total marks : %d\n",sum11);
	per=(sum11*100)/500;
	printf("mayur semester 2 percentage : %.2f\n",per);
	if(per>=0 && per<=34)
	{
		printf("file\n");
	}
else if(per>=35 && per<=59)
	{
		printf("pass\n");
	}
else if (per>=60 && per<=79)
	{
		printf("grade=B\n");
	}
else if (per>=80 && per<=100)
	{
		printf("grade=A\n");
	}
	printf("mayur semester 3 total marks : %d\n",sum12);
	per=(sum12*100)/500;
	printf("mayur semester 3 percentage :%.2f\n",per);
	if(per>=0 && per<=34)
	{
		printf("file\n");
	}
else if(per>=35 && per<=59)
	{
		printf("pass\n");
	}
else if (per>=60 && per<=79)
	{
		printf("grade=B\n");
	}
else if (per>=80 && per<=100)
	{
		printf("grade=A\n");
	}
	total4=sum10+sum11+sum12;
	printf("Total maeks of mayur : %d\n",total4);
	printf("\n");
	printf("-----------------\n");
	//alpesh=====================================
	printf("Enter mark alpesh\n");
	printf("Enter sem 1 marks\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		sum13 +=a[i];
	}
	printf("Enter sem 2 maks\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		sum14 +=a[i];
	}
	printf("Enter sem 3 malks\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		sum15 +=a[i];
	}
	printf("alpesh semester 1 total marks : %d\n",sum13);
	per=(sum13*100)/500;
	printf("alpesh semester 1 percentage :%.2f\n",per);
	
	if(per>=0 && per<=34)
	{
		printf("file\n");
	}
else if(per>=35 && per<=59)
	{
		printf("pass\n");
	}
else if (per>=60 && per<=79)
	{
		printf("grade=B\n");
	}
else if (per>=80 && per<=100)
	{
		printf("grade=A\n");
	}
	printf("alpesh semester 2 total marks : %d\n",sum14);
	per=(sum14*100)/500;
	printf("alpesh semester 2 percentage :%.2f\n",per);
	if(per>=0 && per<=34)
	{
		printf("file\n");
	}
else if(per>=35 && per<=59)
	{
		printf("pass\n");
	}
else if (per>=60 && per<=79)
	{
		printf("grade=B\n");
	}
else if (per>=80 && per<=100)
	{
		printf("grade=A\n");
	}
	printf("alpesh semester 3 total marks : %d\n",sum15);
	per=(sum15*100)/500;
	printf("alpesh semester 3 percentage : %.2f\n",per);
	
	if(per>=0 && per<=34)
	{
		printf("file\n");
	}
else if(per>=35 && per<=59)
	{
		printf("pass\n");
	}
else if (per>=60 && per<=79)
	{
		printf("grade=B\n");
	}
else if (per>=80 && per<=100)
	{
		printf("grade=A\n");
	}
	total5=sum13+sum14+sum15;
	printf("Total marks of alpesh : %d\n",total5);
	
	printf("\n");
	return 0;
}