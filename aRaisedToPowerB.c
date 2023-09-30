#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the Base Number:");
    scanf("%d",&a);
    printf("Enter the Power Number:");
    scanf("%d",&b);
    int product=1;
    for(int i=1;i<=b;i++)
    {
        product=product*a;
    }
    printf("When %d is raised to power %d The OUTPUT is %d",a,b,product);
    return 0;
}