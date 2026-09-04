/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

* */ 

#include <stdio.h>
int main()
{
    int i,j,nst=1;
    for(i=1;i<=3;i++) // have to print star 3 times [1,3,5]
    {
        for(j=1;j<=nst;j++)
        {
            printf("*\n"); //moves to the next line
        }
        printf("\n"); //leaves a line
        nst+=2; //after this cursor went to line 25 which is for loop and i incremented
    }
    nst-=4;
    for(i=1;i<=2;i++) // bcz only 2 times, star is to be printed [5 star ke baad]
    {
        for(j=1;j<=nst;j++)
        {
            printf("*\n");
        }
         printf("\n");
         nst-=2;
    }
