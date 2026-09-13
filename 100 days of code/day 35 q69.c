//Find the second largest element in an array.
#include<stdio.h> 
#include <limits.h>
int main()
{  
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    int i,a,max=INT_MIN,smax=INT_MIN;;  
    printf("enter elements in an array:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        printf("%d ",arr[i]);            
    }
    for(i=0;i<=n-1;i++)
    {
        if(arr[i]>max)
        {
         max=arr[i];
        }
    }
    for(i=0;i<=n-1;i++)
    {
        if(arr[i]!=max && arr[i]>smax)
        smax=arr[i];
    }
    if (smax==INT_MIN)
    {
        printf("there is no second highest element in the array"); //if array has same elements or array size is 1-->it wil store the garbage vlaue
    }
    else
    {
    printf("second highest element in an array is %d",smax);
    }
    return 0;
}
