//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main()
{
    int n,n,sum=0u;
    printf("enter a number:");
    scanf("%d", &n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("the sum of digits is %d",sum);
    return 0;
}
