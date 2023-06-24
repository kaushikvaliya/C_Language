#include <stdio.h> 
int main() 
{
    int a,*p,count=0,i;
    printf("Enter number chake prime or not :");
    scanf("%d",&a);
    p=&a;
    for(i=1;i<=*p;i++){
        if (*p % i == 0){
            count++;
        }
    }
    if (count==2){
        printf("prime number\n");
    }
    else
    {
        printf("not prime number\n");
    }
    return 0;
}