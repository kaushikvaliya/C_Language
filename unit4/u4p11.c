//Write a program to Delete an element from an Array.
#include <stdio.h>
 int main() 
{
    int a[100],i,n,pos;
 
    printf("Enter array value\n");    
    scanf("%d",&n);
    printf("Enter number\n");
    for (i=1;i<=n;i++){
		printf("a[%d]=",i);
        scanf("%d",&a[i]);
    } 
    printf("Enter deleted  Element\n");
    scanf("%d",&pos);
    for(i=pos;i<=n-1;i++){
        a[i]=a[i+1];
    }
    n=n-1;
    printf("one Element deleted\n");
    for(i=1;i<=n;i++){
        printf("a[%d] = %d\n",i,a[i]);
    }
	return 0;
}