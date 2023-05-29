//Write a program to Add of All Array Elements.
#include <stdio.h>
int main()
{
    int a[10],i,n,sum=0;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
    printf("Enter number\n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("sum of array is : %d\n",sum);
    return 0;
}