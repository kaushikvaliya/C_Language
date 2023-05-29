//Write a program to insert an element in an Array at given position.
#include <stdio.h>
int main()
{
   int array[10],position,i,value;

    printf("Enter element.\n");
    for (i=0;i<5;i++){
        scanf("%d", &array[i]);
    }
    printf("Enter the location an element:");
    scanf("%d", &position);
    printf("Enter the value to insert : ");
    scanf("%d", &value);
    for (i=5-1;i>= position-1; i--){
        array[i+1] = array[i];
    }
    array[position-1] = value;
    printf("Resultant array is...\n");
    for (i= 0;i<=5;i++){
        printf("%d\n", array[i]);
    }
    return 0;
}