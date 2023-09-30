#include<stdio.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int count=1;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("There are %d digtis",count);
    return 0;
}