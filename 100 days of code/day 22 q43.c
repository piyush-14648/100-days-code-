//Write a program to check if a number is a strong number.
#include <stdio.h>
int main()
{
    int n,r,i,f,sum=0,a;
    printf("enter a number: ");
    scanf("%d", &n);
    a=n;
    while (n != 0)
    {
        f=1;
        r = n % 10;
        for ( i=1;i<=r;i++)
        {
            f=f*i;      
        }
        sum=sum+f;
        n = n / 10;
    }
    if (sum==a)
    printf("strong nnumber");
    else
    printf("not a strong nnumber");
    return 0;
}
