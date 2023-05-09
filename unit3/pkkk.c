#include <stdio.h>
int mult(int a, int b)
{
    return a * b;
}
int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("multiply : %d", mult(x, y));
    return 0;
}
