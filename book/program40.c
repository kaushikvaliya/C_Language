//write a program to read marks and display grade accoding to folloeing table.
#include <stdio.h>
int main()
{
	int mark;
	printf("Enter Mark :");
	scanf("%d",&mark);
	if(mark>=0 && mark<=34)
	{
		printf("Fail\n");
	}
	else if(mark>=35 && mark<=59)
	{
		printf("Second\n");
	}
	else if (mark>=60 && mark<=79)
	{
		printf("First\n");
	}
	else if (mark>=80 && mark<=100)
	{
		printf("Distinction\n");
	}
return 0;
}	