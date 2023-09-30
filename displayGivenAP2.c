#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of terms:");
    scanf("%d",&n);
    int a=100;
    for(int i=1;a>0;i++)
    {
        printf("%d\n",a);
        a=a-3;
    }
}