#include <stdio.h>
#include <string.h>
int main()
{
  char a[1000], b[1000];
  printf("Enter a string :");
  gets(a);
  strcpy(b,a);
  printf("Copy string: %s\n",b);
  return 0;
}