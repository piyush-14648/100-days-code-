//Find the sum of all elements in a matrix
#include <stdio.h>
int main()
{
    int arr[3][4];
    int sum=0;
    printf("enter 12 elements in an array:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
             sum+=arr[i][j];
        }
    }
    printf("sum of all elements in array is %d",sum);
}
