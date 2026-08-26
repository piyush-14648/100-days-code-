//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
int main()
{
    int n,r,a,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if (a==sum)
    printf("Armstrong Number");
    else
    printf("Not a Armstrong Number");
 return 0;
}
