#include <stdio.h>
int main()
{
	int array1[5], array2[5], array3[5];
	int i, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
	int total = 500;
	float per1, per2, per3;

	printf("Enter  semester  1 marks\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &array1[i]);
		sum1 += array1[i];
	}
	per1 = (sum1 * 100) / total;

	printf("Enter semester 2 marks\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &array2[i]);
		sum2 += array2[i];
	}
	per2 = (sum2 * 100) / total;

	printf("Enter  semester 3 marks\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &array3[i]);
		sum3 += array3[i];
	}
	per3 = (sum3 * 100) / total;

	printf("Merg computar institute\n");

	printf("-------------------------------\n");
	printf("Semester 1 Total marks = %d\n", sum1);
	printf("Semester 1 percentage =%.2f\n", per1);
	if (per1 >= 0 && per1 <= 34)
	{
		printf("fail\n");
	}

	else if (per1 >= 35 && per1 < 50)
	{
		printf("pass\n");
	}
	else if (per1 >= 50 && per1 < 60)
	{
		printf("Grade : D\n");
	}
	else if (per1 >= 60 && per1 < 70)
	{
		printf("Grade : C\n");
	}
	else if (per1 >= 70 && per1 < 80)
	{
		printf("Grade : B\n");
	}
	else if (per1 >= 80 && per1 < 100)
	{
		printf("Grade : A\n");
	}
	printf("-------------------------------\n");
	printf("Semester 2 Total marks = %d\n", sum2);
	printf("Semester 2 percentage =%.2f\n", per2);
	if (per2 >= 0 && per2 <= 34)
	{
		printf("fail\n");
	}
	else if (per2 >= 35 && per2 < 50)
	{
		printf("pass\n");
	}
	else if (per2 >= 50 && per2 < 60)
	{
		printf("Grade : D\n");
	}
	else if (per2 >= 60 && per2 < 70)
	{
		printf("Grade : C\n");
	}
	else if (per2 >= 70 && per2 < 80)
	{
		printf("Grade : B\n");
	}
	else if (per2 >= 80 && per2 < 100)
	{
		printf("Grade : A\n");
	}
	printf("-------------------------------\n");
	printf("Semester 3 Total marks = %d\n", sum3);
	printf("Semester 3 percentage =%.2f\n", per3);
	if (per3 >= 0 && per3 <= 34)
	{
		printf("fail\n");
	}
	else if (per3 >= 35 && per3 < 50)
	{
		printf("pass\n");
	}
	else if (per3 >= 50 && per3 < 60)
	{
		printf("Grade : D\n");
	}
	else if (per3 >= 60 && per3 < 70)
	{
		printf("Grade : C\n");
	}
	else if (per3 >= 70 && per3 < 80)
	{
		printf("Grade : B\n");
	}
	else if (per3 >= 80 && per3 < 100)
	{
		printf("Grade : A\n");
	}
	printf("-------------------------------\n");
	sum4 = sum1 + sum2 + sum3;
	printf("Your three semester total=%d\n", sum4);
	printf("-------------------------------\n");
	return 0;
}