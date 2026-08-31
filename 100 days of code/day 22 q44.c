//Write a program to find the sum of the series: 1/2 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main()
{
    int n,i;
    float s=0,num,den;  
    printf("enter a number:"); 
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        num=2*i-1;
        den=2*i;
        s=s+(num/den);
    }
    printf("sum of series is %.2f",s);
    return 0;
}
