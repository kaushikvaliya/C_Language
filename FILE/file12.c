//Display the contents of a file in upper and lowre case.
#include<stdio.h>
#include<ctype.h>
int main()
{
    FILE *file;
    char ch;
    file = fopen("k11.txt","r");
    if(file == NULL)
    {
        printf("File if not opend.");
        return 0;
    }
    ch = fgetc(file);
    while(ch != EOF){
        printf("%c",toupper(ch));   // upper case
       // printf("%c",tolower(ch)); // lower case
        ch = fgetc(file);
    }
    fclose(file);
    return 0;
}