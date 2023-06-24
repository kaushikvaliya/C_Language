#include <stdio.h>
int main()
{
    int a[10],i,*p,sum=0;
    printf("Enter number.\n");
    for(i=1;i<=5;i++){
        scanf("%d",&a[i]);
    }
    p=&a[0];
    for(i=1;i<=5;i++){
        sum+= *(p+i);
    }
    printf("sum of number : %d",sum);
    return 0;
}