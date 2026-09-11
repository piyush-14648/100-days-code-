//Insert an element in a sorted array at the appropriate position
#include<stdio.h> 
int main()
{  
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n+1];
    int i,a,k,target;  //here, a is used for shifting elements to the right and k is used to insert the target in that position
    printf("enter elements in an array:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        printf("%d ",arr[i]);            
    }
    printf("enter position k to insert at:");
    scanf("%d",&k);
    printf("enter element to insert:");
    scanf("%d",&target);
    a=n-1;
    while(a>=k)
    {
        arr[a+1]=arr[a];
        a=a-1;
    }
    arr[k]=target;
    for(i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);           
    }
   
    return 0;
}
