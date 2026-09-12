//Insert an element in an array at a given position.
#include<stdio.h> 
int main()
{  
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n+1];
    int i,a,pos,value;  
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
    scanf("%d",&pos);
    printf("enter element to insert:");
    scanf("%d",&value);
    a=n-1;
    while(a>=pos)
    {
        arr[a+1]=arr[a];
        a=a-1;
    }
    arr[pos]=value;
    for(i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);           
    }
   
    return 0;
}
