//Write a program to check whether the character is Vowel or Constant.
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the alphabet:");
	scanf("%c",&ch);
	if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' ||ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
	{
		printf("%c is  vowel\n",ch);
	}
	else
	{
		printf("%c is consonant\n",ch);
	}
	return 0;
}