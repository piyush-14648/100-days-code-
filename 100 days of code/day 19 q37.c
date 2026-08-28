//Write a program to find the LCM of two numbers.
#include <stdio.h>
int main()
{
    int i,j,a,b,lcm,hcf=1;
    printf("enter two numbers:");
    scanf("%d %d", &a,&b);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (i == j && a % i == 0 && b % j == 0)
                hcf = i;
        }
    }
    lcm=(a*b)/hcf;
    printf("LCM is %d", lcm);
    return 0;
}
