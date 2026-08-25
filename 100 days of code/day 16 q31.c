//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main()
{
    int n,r,binary=0,place=1;
    printf("enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%2;
        binary=binary+(r*place);
        place=place*10;
        n=n/2;
    }
    printf("The number in  binary is %d",binary);
 return 0;
}
