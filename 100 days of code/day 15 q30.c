//Write a program to reverse a given number.
#include <stdio.h>
int main()
{
    int i,n,r,rev=0;
    printf("enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    printf("The reverse of the number is %d ",rev);
}
