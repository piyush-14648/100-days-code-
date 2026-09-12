//Delete an element from an array
#include<stdio.h> 
int main()
{  
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    int i,a,store=-1,ele;  
    printf("enter elements in an array:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        printf("%d ",arr[i]);            
    }
    printf("enter the element which you want to be deleted:");
    scanf("%d",&ele);
    for(i=0;i<=n-1;i++)
    {
        if(arr[i]==ele)
        {
            store=i;
            break;
        }
    }
    if(store==-1)
    {
        printf("element not found");
    }
    else
    {
     a=n-1;
     while(a>store)
        {
            arr[store]=arr[store+1];
            store++;
        }
        for(i=0;i<=n-2;i++)
        {
            printf("%d ",arr[i]);           
        }
    }
    return 0;
}
