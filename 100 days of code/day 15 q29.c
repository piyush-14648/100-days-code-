//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main()
{
    int i,n,f=1;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        
        f*=i;
    }
    printf("The factorial of the number is %d ",f);
}
