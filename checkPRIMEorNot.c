#include<stdio.h>
int main()
{
    int n;
    int a=0;
    printf("Enter the number :");
    scanf("%d",&n);
    if(n==1) {printf("Number is nor prime neither composite");}
    else if(n!=1)
    {
        for(int i=2;i<=n-1;i++)
        {
            if(n%i==0) 
             {
                a=1;
                break;
             }  
        }
    }
    if(a==0) printf("Number is Prime");
    else  printf("Number is Composite");
    return 0;
}