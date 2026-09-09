//Search for an element in an array using linear search.
#include<stdio.h>
int main()
{
    int n, k,i, store,flag=0;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array\n:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter element to be searched: ");
    scanf("%d",&k);
    for(i=0;i<=n-1;i++)
    {
       if (arr[i]==k)
       {
        flag=1;
        store=i;
        break;
       }
    }
    if (flag==1)
    {
        printf("element found is %d at index %d",k,store);
    }
    else
    {
        printf("element not found");
    }
    return 0;
}
