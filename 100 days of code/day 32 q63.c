//Merge two arrays.
#include <stdio.h>
int main()
{
     int arr[5]={1,2,3,4,5}, brr[5]={6,7,8,9,10},merge[10],i,j,k=0;
     for(i=0;i<=4;i++)
     {
        merge[i]=arr[i];
     }
        for(i=5;i<=9;i++)
        {
            merge[i]=brr[k];
            k++;
        }
     
     for(i=0;i<=9;i++)
     {
        printf("%d ",merge[i]);
     }
     return 0;
}
