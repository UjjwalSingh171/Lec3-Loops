#include<stdio.h>
int main()
{   
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int ld,sum;
    sum=0;
    ld=0;
    while(n!=0)
    {
        ld=n%10;
        sum=sum+ld;
        n=n/10;
    }
    printf("Sum of digits is %d",sum);
    return 0;
}