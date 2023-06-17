#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fptr;
    char filename[15];
    char ch;
    printf("Enter file name :");
    scanf("%s",filename);
    fptr = fopen(filename,"r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf ("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);
}