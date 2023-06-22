#include <stdio.h>
#include <string.h>
int main()
{
    char ch[50];
    printf("Enter Name Upper Case :");
    gets(ch);
    // scanf("%s",&ch);
    printf("Lowar case = %s",strlwr(ch));
    return 0;
}