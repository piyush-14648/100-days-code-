//Check if the elements on the diagonal of a matrix are distinct
#include <stdio.h>
int main()
{
    int arr[3][3];
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
        for( j=i+1;j<3;j++)          // fixed: j starts from i+1, only unique pairs
        {
            if (arr[i][i]==arr[j][j])   // fixed: compare pairs, not "all three equal"
            flag=1;
        }   
    }
    if (flag==0)
    printf("distinct");
    else
    printf("not distinct");
}

//this is also correct but not good practise
    // if (arr[0][0]==arr[1][1] || arr[0][0]==arr[2][2] || arr[1][1]==arr[2][2])
    // flag=1;



   // method 2:
// #include <stdio.h>
// int main()
// {
//     int arr[3][3];
//     int diag[3];
//     int i,j,flag=0;
//     printf("enter 9 elements in an array:");
//     for( i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for( i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
    
//     // Step 1: diagonal ko alag array mein nikaalo
//     for(i=0; i<3; i++)
//     {
//         diag[i] = arr[i][i];
//     }
    
//     // Step 2: diag[] mein duplicate check karo
//     for(i=0; i<3; i++)
//     {
//         for(j=i+1; j<3; j++)
//         {
//             if(diag[i]==diag[j])
//             flag=1;
//         }
//     }
    
//     if (flag==0)
//         printf("distinct");
//     else
//         printf("not distinct");
//     return 0;
// }
