//Find the sum of main diagonal elements for a square matrix
#include <stdio.h>
int main()
{
    int arr[3][3],sum=0,store[3];
    int i,j,flag=0;
    printf("enter 9 elements in an array:");
    for( i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for( i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
     for( i=0;i<3;i++)
     {
        store[i]=arr[i][i];
     }
     for(i=0;i<3;i++)
     {
        sum=sum+store[i];
     }
    
    printf("sum of diagonal elements is %d",sum);
}

//OR USE THIS,SHORT VERSION
// for(i=0;i<3;i++)
//      {
//         sum=sum+store[i];    //no need to store the diagonal elements in another array
//      }



