/*Write a program to print
   *
  * *
 * * *
* * * *    		*/
#include <stdio.h>
int main() 
{
   int rows, s, i, j;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 0; i < rows; i++)
   {
      for (s = 1; s <= rows - i; s++)
         printf("  ");
      for (j = 0; j <= i; j++)
      {
         printf("*   ");
      }
      printf("\n");
   }
   return 0;
}