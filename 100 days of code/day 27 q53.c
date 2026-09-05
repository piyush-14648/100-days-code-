// Write a program to print the following pattern:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *

#include <stdio.h>
int main()
{
    int i,j,nst=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=nst;j++)
        {
            printf("*");
        }
        printf("\n");
        nst+=2;
    }
    nst-=4;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=nst;j++)
        {
            printf("*");
        }
         printf("\n");
         nst-=2;
    }
}
