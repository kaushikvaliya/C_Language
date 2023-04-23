#include <stdio.h>
#include <conio.h>
#define KEY "Enter the calculator Operation you want to do"
void addition();
void subtraction();
void  multiplication();
void  division();
void  modulus();
void calculator_operations();
int main()
{
    char ch;
    int x=1;
    while (x)
    {
        // printf("Enter the calculator Operation you want to do : ");
        // scanf("%c",&ch);
        printf("\n");
        calculator_operations();
        printf("\n");
        printf("%s : ", KEY);
        ch =getche();
        switch(ch)
        {
            case '+':
                addition();
                break;
            case '-':
                subtraction();
                break;
            case '*':
                multiplication();
                break;
            case '/':
                division();
                break;
            case '?':
                modulus();
                break;
            case 'q':
            case 'Q':
                return 0;
                break;    
            default :
            printf("not match\n");
            break;
        }
    } 
}
void calculator_operations()
{
    printf("Press 'Q' or 'q' to exit");
    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter ? symbol for Modulus\n");
}
void addition()
{
    int n, total = 0, k = 0, number;
    printf("\nEnter the number of elements you want to add:");
    scanf("%d", &n);
    printf("Please enter %d numbers one by one: ", n);
    while (k < n)
    {
        scanf("%d", &number);
        total = total + number;
        k = k + 1;
    }
    printf("Sum of %d numbers = %d \n", n, total);

}
void subtraction()
{
    int a, b, c = 0;
    printf("\nPlease enter first number  : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    c = a - b;
    printf("%d - %d = %d\n", a, b, c);
}
void multiplication()
{
    int a, b, mul = 0;
    printf("\nPlease enter first numb   : ");
    scanf("%d", &a);
    printf("Please enter second number: ");
    scanf("%d", &b);
    mul = a * b;
    printf("Multiplication of entered numbers = %d\n", mul);
}
void division()
{
    float a, b, d = 0;
    printf("\nPlease enter first number  : ");
    scanf("%f", &a);
    printf("Please enter second number : ");
    scanf("%f", &b);
    d = a / b;
    printf("Division of entered numbers=%.2f\n", d);
}

void modulus()

{
    int a, b, d = 0;
    printf("\nPlease enter first number   : ");
    scanf("%d", &a);
    printf("Please enter second number  : ");
    scanf("%d", &b);
    d = a % b;
    printf("Modulus of entered numbers = %d\n", d);
}
