#include <stdio.h>
#include <string.h>
int main()
{
    /* String Declaration*/
    char nickname[20];
    /* Console display using puts */
    printf("Enter your Nick name:");
    /*Input using gets*/
    gets(nickname);
    puts(nickname);
    return 0;
}