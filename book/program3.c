/*write a program in which sum of month and day,then find the number of months and days.
the formula
month=day/30;day=day%30  */

#include <stdio.h>
int main()
{
	int month, day;
	printf("Enter day :");
	scanf("%d", &day);
	month = day / 30;
	day = day % 30;
	printf("Month=%d \t day=%d\n", month, day);
	return 0;
}