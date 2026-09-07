// Find the sum of array elements.
#include<stdio.h>
int main()
{
    int n,i,sum=0;
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
        sum+=arr[i];
    }
    printf("%d ",sum);  
}
