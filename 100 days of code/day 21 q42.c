//Write a program to check if a number is a perfect number.
#include <stdio.h>
int main()
{
    int n,i,f_sum=0;
    printf("enter a number:");
    scanf("%d", &n);
    for (i=1;i<n;i++)
    {
        if (n%i==0)
        f_sum=f_sum+i;
    }
    if (n==f_sum)
    printf("perfect number");
    else
    printf("not a perfect number");
    return 0;
}
