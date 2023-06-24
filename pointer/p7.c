#include <stdio.h> 
int main() 
{
    int a[10],i,*p,even=0,odd=0;
    printf("Enter number.\n");
    for(i=1;i<=10;i++){
        scanf("%d",&a[i]);
    }
    p=&a[0];
    printf("your enter numner is.\n");
    for(i=1;i<=10;i++){
        if(*(p+i)%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("total Even=%d\ntotal odd=%d",even,odd);
    return 0;
}