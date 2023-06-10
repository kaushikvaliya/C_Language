#include<stdio.h>
int main()
{
    int a[5],i,sum=0;
    for(i=1;i<=5;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("sum of array = %d\n",sum);
    return 0;
}