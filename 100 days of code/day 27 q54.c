// Write a program to print the following pattern:
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

#include <stdio.h>
int main()
{
    int i,j,k,nst=1,nsp=3;
    for(i=1;i<=4;i++)
    {
        for(k=1;k<=nsp;k++)
        {
            printf(" ");
        }
            for(j=1;j<=nst;j++)
            {
                printf("*");
            }
            nst+=2;
            nsp--;
            printf("\n");
    }
    nst-=4; //OR nst=5;
    nsp=1;
    for(i=1;i<=3;i++)
    {
        for(k=1;k<=nsp;k++)
        {
            printf(" ");
        }
            for(j=1;j<=nst;j++)
            {
                printf("*");
            }
            nst-=2;
            nsp++;
            printf("\n");
    }
}
