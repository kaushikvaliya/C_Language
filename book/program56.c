//write a program to display a box.
#include <stdio.h>
int main()
{
    int a,b;
    for(a=0;a<=10;a++){
        printf("\n");
        for(b=1;b<=40;b++){
            printf("\xDB");
        }
    }
    return 0;
}