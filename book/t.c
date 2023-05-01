
#include<stdio.h>
int main()
{
     int days=0, years=0, weeks=0, months=0; 
     char ch;

     printf("Enter day & year (plesee Enter y & d) :");
     scanf("%c",&ch);
     if (ch=='y')
     {
        printf("Enter  years : ");
        scanf("%d",&years);

       months = 12 * years;

      days = 365 * years;

       printf("years to months : %d\n",months);
       printf("years to days : %d\n",days);

     }
     else if(ch=='d')
     {
        printf("Enter days : ");
        scanf("%d",&days);
        years=days/365;
        months=days/30;
        printf("Days to years : %d\n",years);
        printf("Days to months : %d",months);
     }
     return 0;
}