//Check if a matrix is symmetric
#include <stdio.h>
int main()
{
    int arr[2][2];
    int i,j,flag=1;
    printf("enter 4 elements in an array:");
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
    for( i=0;i<2;i++)
    {  
        for( j=0;j<2;j++) 
        {
            if (arr[i][j]!=arr[j][i])
            flag=0;
        }   
    }
    if (flag==1)
    printf("symmetric matrix");
    else
    printf("not a symmetric matrix");
}
