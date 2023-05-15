//Write a Program to check whether string is palindrome or not.
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100];
    printf("Enter a string to check palindrome and not :");
    gets(a);
    strcpy(b,a);
    strrev(b);  
    if (strcmp(a,b)==0)
    { 
      printf("string is palindrome.\n");
    }
    else
    {
      printf("string is not palindrome.\n");
    }
    return 0;
}