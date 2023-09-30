#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms you want to print:");
    scanf("%d",&n);
    float a=100;
    for(int i=1;i<=n;i++)
        {
            printf("%f\n",a);
            a=a*0.5;
        }
}