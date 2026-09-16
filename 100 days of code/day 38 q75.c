//Add two matrices
#include <stdio.h>
int main()
{
    int arr[2][2],brr[2][2],sum[2][2];
    int i,j;
    printf("enter 12 elements in 1st array:");
    for( i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for( i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    printf("enter 12 elements in 2nd array:");
     for( i=0;i<2;i++)
     {
        for( j=0;j<2;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    for( i=0;i<2;i++)
    {
        for( j=0;j<2;j++)
        {
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    for( i=0;i<2;i++)
    {  
        for( j=0;j<2;j++) 
        {
            sum[i][j]=arr[i][j] + brr[i][j]; 
            printf("%d",sum[i][j]);
        }   
        printf("\n");
    }
}
