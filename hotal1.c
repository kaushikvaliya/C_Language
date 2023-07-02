#include <stdio.h>
int main()
{
    int num, quantity;
    float pir, amt, total;
    char ch;

    while (1)
    {
        printf("---------- Manu --------\n");
        printf("1.Pizza  \tprice = 180rs/pcs\n");
        printf("2.Burger \tprice = 100rs/pcs\n");
        printf("3.Dosa   \tprice = 120rs/pcs\n");
        printf("4.Idli   \tprice = 50rs/pcs\n");

        printf("Please Enter your choose... :");
        scanf("%d", &num);
        printf("Enter the quantity :");
        scanf("%d", &quantity);

        switch (num)
        {
        case 1:
            pir = 180;
            break;
        case 2:
            pir = 100;
            break;
        case 3:
            pir = 120;
            break;
        case 4:
            pir = 50;
            break;
        default:
            printf("\nSorry Unavailable choose...\n");
            break;
        }

        amt = pir * quantity;
        printf("Amaunt = %.2f\n", amt);

        total = total + amt;
        printf("total Amaunt is = %.2f\n", total);

        printf("Do you want place more orders ? y & n :");
        scanf("%s", &ch);
        if (ch == 'n')
        {
            return 0;
        }
    }
}