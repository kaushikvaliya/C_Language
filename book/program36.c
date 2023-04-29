//write a program to read mark of student and check the student is pass of fail.
#include <stdio.h>
int main ()
{
	int mark;
	printf("Enter Your mark :");
	scanf("%d",&mark);
	if(mark>=35)
	{
		printf("pass\n");
	}
	else
	{
		printf("Fail\n");
	}
	return 0;
}	