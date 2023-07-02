#include <stdio.h>
void pizza();
void Burger();
void Dosa();
void Idli();
void manu();
int totalamt;
int main()
{
    int num, total;
    char ch;
    while (1)
    {

        manu();
        printf("Please Enter your choose... :");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            pizza();
            break;

        case 2:
            Burger();
            break;

        case 3:
            Dosa();
            break;

        case 4:
            Idli();
            break;

        default:
            printf("\nSorry Unavailable choose...\n");
            break;
        }
        printf("Do you want place more orders ? y & n :");
        scanf("%s", &ch);
        if (ch == 'n')
        {
            return 0;
        }
    }
}
void manu()
{
    printf("---------- Manu --------\n");
    printf("1.Pizza  \tprice = 180rs/pcs\n");
    printf("2.Burger \tprice = 100rs/pcs\n");
    printf("3.Dosa   \tprice = 120rs/pcs\n");
    printf("4.Idli   \tprice = 50rs/pcs\n");
}
void pizza()
{
    int rate, qty, total;

    printf("\nYou have selected pizza.\nEnter the quantity :");
    scanf("%d", &qty);
    rate = 180;
    total = qty * rate;
    printf("Amount : %d\n", total);
    totalamt = totalamt + total;
    printf("Total Amount is = %d\n", totalamt);
}
void Burger()
{
    int rate, qty, total;

    printf("\nYou have selected Burger.\nEnter the quantity :");
    scanf("%d", &qty);
    rate = 100;
    total = qty * rate;
    printf("Amount : %d\n", total);
    totalamt = totalamt + total;
    printf("Total Amount is = %d\n", totalamt);
}
void Dosa()
{
    int rate, qty, total;

    printf("\nYou have selected Dosa.\nEnter the quantity :");
    scanf("%d", &qty);
    rate = 120;
    total = qty * rate;
    printf("Amount : %d\n", total);
    totalamt = totalamt + total;
    printf("Total Amount is = %d\n", totalamt);
}
void Idli()
{
    int rate, qty, total;

    printf("\nYou have selected Dosa.\nEnter the quantity :");
    scanf("%d", &qty);
    rate = 50;
    total = qty * rate;
    printf("Amount :%d\n", total);
    totalamt = totalamt + total;
    printf("Total Amount is = %d\n", totalamt);
}