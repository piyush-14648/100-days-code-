// Find the maximum and minimum element in an array.
#include<stdio.h>
#include<limits.h>
int main()
{
    int n, i, max=INT_MIN, min=INT_MAX;
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
       if(arr[i]>max)
       max=arr[i];
       if (arr[i]<min)
       min=arr[i];
    }
    printf("maximum element in array is %d\n",max);
    printf("minimum element in array is %d",min);
}
