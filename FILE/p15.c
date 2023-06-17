#include <stdio.h>
int main()
{
  char str[20], str2[20];
  int age;
  FILE *fp;
  fp = fopen("abc.txt", "a");
  printf("Enter name and age: ");
  scanf("%s%d", str, &age);

  //Printing to File or Writing to File
  fprintf(fp, "%s %d", str, age);
  fclose(fp);


  //Now reading or Scanning from FILE
  fp = fopen("abc.txt", "r");
  fscanf(fp, "%s %d", str2, &age);
  printf("Name=%s, Age=%d", str2, age);
  fclose(fp);

  return 9;
}