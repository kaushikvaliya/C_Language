#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10];
    printf("Enter any name :");
    gets(ch);
    // scanf("%s",&ch);
    printf("Revers name is = %s",strrev(ch));
    return 0;
}