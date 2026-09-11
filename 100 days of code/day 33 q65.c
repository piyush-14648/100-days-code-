//Search in a sorted array using binary search
#include<stdio.h> //CODE FOR ARRAY IN ASCENDING ORDER
int main()
{  
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    int st=0,end=n-1,mid,i,target,pos=-1;
    printf("enter elements in an array:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        printf("%d",arr[i]);
    }
    printf("enter element to search:");
    scanf("%d",&target);
    while(st<=end)
    {
        mid=(st+end)/2;
        if(arr[mid]==target)
        {
            pos=mid;
            printf("element found at position %d",pos+1);
            break;
        }
        else if(target<arr[mid])
        {
            end=mid-1;
        }
        else
        {
            st=mid+1;
        }
    }
    if(pos==-1)
    {
        printf("element not found");
    }
    return 0;
}
