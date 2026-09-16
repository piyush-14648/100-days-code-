//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main()
{
    int arr[3][4], brr[3];
    int i;
    printf("enter 12 elements in an array:");
    for( i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for( i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for( i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<4;j++)
        {
             sum+=arr[i][j];
        }
        brr[i]=sum;
        printf("sum of row %d in array is %d\n",i+1,brr[i]);

    }
}
