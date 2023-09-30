#include<stdio.h>
int main()
{
    int n;
    int rev=0;
    printf("Enter the Number you want to reverse:");
    scanf("%d",&n);
    for(int i=1;n>0;i++)
    {
        rev=n%10;
        n=n/10;
        printf("%d",rev);
    }
    return 0;
}