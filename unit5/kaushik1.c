#include <stdio.h>
#include <string.h>
int main()
{
    int arr1[5],arr2[5],arr3[5],k[3];
    int total=500;
    int i,sum1=0,sum2=0,sum3=0;
    float per1,per2,per3;

    printf("Enter kaushik 5 subject mark.\n");
    for(i=1;i<=5;i++){
        scanf("%d",&arr1[i]);
        sum1+=arr1[i];
    }
    per1=(sum1*100)/total;

    printf("Enter ketan 5 subject mark.\n");
    for(i=1;i<=5;i++){
        scanf("%d",&arr2[i]);
        sum2+=arr2[i];
    }
    per2=(sum2*100)/total;

     printf("Enter nanji 5 subject mark.\n");
    for(i=1;i<=5;i++){
        scanf("%d",&arr3[i]);
        sum3+=arr3[i];
    }
    per3=(sum3*100)/total;
    //kaushik
    printf("kaushik sum of 5 subjekt : %d\n",sum1);
    printf("kaushik per = %.2f\n",per1);
    if(per1>=0 && per1<=34)
	{
		printf("file\n");
	}
else if(per1>=35 && per1<=59)
	{
		printf("pass\n");
	}
else if (per1>=60 && per1<=79)
	{
		printf("grade=B\n");
	}
else if (per1>=80 && per1<=100)
	{
		printf("grade=A\n");
	}
        //ketan
    printf("ketan sum of 5 subjekt : %d\n",sum2);
    printf("ketan per = %.2f\n",per2);
    if(per2>=0 && per2<=34)
	{
		printf("file\n");
	}
else if(per2>=35 && per2<=59)
	{
		printf("pass\n");
	}
else if (per2>=60 && per2<=79)
	{
		printf("grade=B\n");
	}
else if (per2>=80 && per2<=100)
	{
		printf("grade=A\n");
	}
    
    //nanji 
    printf("nanji sum of 5 subjekt : %d\n",sum3);
    printf("nanji per = %.2f\n",per3);
    if(per3>=0 && per3<=34)
	{
		printf("file\n");
	}
else if(per3>=35 && per3<=59)
	{
		printf("pass\n");
	}
else if (per3>=60 && per3<=79)
	{
		printf("grade=B\n");
	}
else if (per3>=80 && per3<=100)
	{
		printf("grade=A\n");
	}
    return 0;
}