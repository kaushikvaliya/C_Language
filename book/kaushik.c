#include <stdio.h>
int main()
{
	int roll1[5],roll2[5];
	char namey[20],namex[20];
	
	
	printf("Enter roll 1 number :");
	scanf("%d",&roll1);
	//printf("roll:%d",roll1);
	
	printf("Your name:");
	scanf("%s" ,namey);
	//printf("name: %s\n" , namey);
	
	printf("Enter roll 2 number :");
	scanf("%d",&roll2);
	//printf("roll:%d",roll2);
	
	printf("Your name:");
	scanf("%s" ,namey);

	
	printf("__________________________\n");
	printf("| roll number |   name   |\n");
	
	printf("|       %d  ",roll1);
	printf("  |   %s\n",namey );
	printf("|------------------------|\n");
	printf("|       %d  ",roll2);
	printf("  |   %s|\n", namex);
	printf("|________________________|\n");

	
	
	return 0;
}	
	