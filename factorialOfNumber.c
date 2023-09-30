#include<stdio.h>
int main()
{
    int n ;
    int fact = 1 ;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        fact = i * fact;
    }
    printf("The Factorial of %d is %d",n,fact);
    return 0;
}