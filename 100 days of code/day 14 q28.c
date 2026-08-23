//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main()
{
    int i,n,pro=1;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        pro*=i;
    }
    printf("The product of even numbers from 1 to n is %d ",pro);
}
