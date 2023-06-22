#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100],ch2[100];
	printf("Enter name:");
	scanf("%s",ch);
	printf("Enter name:");
	scanf("%s",ch2);
	if(strcmp(ch,ch2)==0)
	{
		printf("match\n");
	}
	else
	{
		printf("not match\n");
	}
    return 0;
}