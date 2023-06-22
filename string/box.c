#include <stdio.h>
int main()
{
    int number;
    printf("Provide the number of asterisks by side:");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++) {
        for (int j = 1; j <= number; j++) {
            if (i == 1 || i == number || j == 1 || j == number){
                printf("+ ");
            }else{
               printf("  ");
            }
        }
        printf("\n");
    }
}