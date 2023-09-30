#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number you want a table of:");
    scanf("%d",&x); 
    for(int i=1;i<=100;i++)
    {
        printf("%d\n",x*i);
    }
    return 0;
}