//Write a program to check if a number is prime.
#include <stdio.h>
int main()
{
    int n,i,ctr=0;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if (n%i==0)
        ctr+=1;
    }
    if(ctr==2)
    printf("Prime Number");
    else
    printf("Not a Prime Number");
 return 0;
}
