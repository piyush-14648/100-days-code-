// Reverse an array without taking extra space
#include<stdio.h>
    void reverse (int arr[],int n)  //In C, a function parameter needs a data type at any cost
    {
    int i=0, j=n-1;
    while(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main()
{
    int i,j,n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,n); //arr and n are already declared in main function so no need to write the data type of it
    for(i=0;i<=n-1;i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}
