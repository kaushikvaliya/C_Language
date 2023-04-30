//write a program to read display grade according tp following teble using switch.
#include <stdio.h>
int main()
{
	int mark;
	printf("Enter mark (0-99):");
	scanf("%d",&mark);
	switch(mark/10)
	{
		case 9:
			printf("A+\n");
			break;
		case 8:
			printf("A\n");
			break;
		case 7:
		case 6:
			printf("B\n");
			break;
		case 5:
		case 4:
			printf("C\n");
			break;
		case 3:
		case 2:
		case 1:
			printf("Fail\n");
			break;
		default:
			printf("Invaliuid Mark\n");
			break;
	}	
	return 0;
}		