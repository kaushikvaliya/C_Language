#include <stdio.h>
int main()
{
    int a[10],i,*p;
    printf("Enter number.\n");
    for(i=1;i<=5;i++){
        scanf("%d",&a[i]);
    }
    p=&a[0];
    printf("your enter numner is.\n");
    for(i=1;i<=5;i++){
        printf("%d\n",*(p+i));
    }
    return 0;
}