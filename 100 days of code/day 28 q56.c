// Write a program to print all the prime numbers from 1 to n.
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        printf("%d ",arr[i]);
    }
}
