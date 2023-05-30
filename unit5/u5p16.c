//Write a program to search an element from an Array.
#include<stdio.h>
int main()
{
    int a[20], n, element,i,flag=0;

    printf("Enter array size [1-100]: ");
    scanf("%d", &n);
    printf("Enter array elements\n");
    for(i=1; i<=n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&element);
    for(i=1; i<=n; i++){
        if(a[i]==element){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("%d found at position %d", element,i);
    }
    else
    {
        printf("%d not found.", element);
    } 
    return 0;
}