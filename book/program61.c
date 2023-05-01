#include <stdio.h>      
int main()  
{  
    char c;   
    printf ("Enter a character :");  
    c = getchar(); // get a single character  
    printf("You have passed:");  
    putchar(c); // print a single character using putchar  
  
    return 0;  
}  