//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main()
{
    int n,r,pro=1;
    printf("enter a number:");
    scanf("%d", &n);
    while(n!=0)
    {
        r=n%10;
        if (r%2!=0)
        pro=pro*r;
        n=n/10;
    }
    printf("the product of odd digits is %d",pro);
    return 0;
}
