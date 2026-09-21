// Count positive, negative, and zero elements in an array
#include<stdio.h>
int main()
{
    int n, i, pc=0,nc=0,zc=0;
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
       if (arr[i]>0)
       pc+=1;
       else if (arr[i]<0)
       nc+=1;
       else
       zc+=1;
    }
    printf(" total number of positive elements in an array is %d\n",pc);
    printf(" total number of negative elements in an array is %d\n",nc);
    printf(" total number of zero elements in an array is %d\n",zc);
    return 0;

}
