//Find the transpose of a matrix
#include <stdio.h>
int main()
{
    int arr[3][4];
    int i,j;
    printf("enter 12 elements in an array:");
    for( i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for( i=0;i<3;i++)
    {
        for( j=0;j<4;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for( j=0;j<4;j++)
    {   
        for( i=0;i<3;i++)
        {
            printf("%d",arr[i][j]); 
        }   
        printf("\n");
    }
}
