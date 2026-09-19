//Multiply two matrices.
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j,k;
    printf("enter 9 elements in 1st array:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter 9 elements in 2nd array are:");
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("9 elements in 1st array are:\n");
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("9 elements in 2nd array are:\n");
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
     }
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]=c[i][j] + (a[i][k]*b[k][j]);
            }
        }
     }
     printf("multiplication of two matrices is:");
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
     }
}
