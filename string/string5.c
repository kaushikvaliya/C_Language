#include <stdio.h>
#include <string.h>
int main()
{
    char ch[10];
    printf("Enter name lower case :");
     gets(ch);
    // scanf("%s",&ch);
    printf("upper case = %s",strupr(ch));
    return 0;
}