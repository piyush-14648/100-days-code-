// Count even and odd numbers in an array
#include<stdio.h>
int main()
{
    int n, i, c1=0,c2=0;
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
       if (arr[i]%2==0)
       c1+=1;
       else
       c2+=1;
    }
    printf(" total number of even elements in an array is %d\n",c1);
    printf(" total number of odd elements in an array is %d\n",c2);
    return 0;

}
