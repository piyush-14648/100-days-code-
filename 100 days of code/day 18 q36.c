//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main()
{
    int i,a,b,r;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    printf("HCF of two numbers is %d ",a);
    return 0; 
}
// method 2:
// for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= b; j++)
//         {
//             if (i == j && a % i == 0 && b % j == 0)
//                 hcf = i;
//         }
//     }

//     printf("HCF is %d", hcf);
//     return 0;
// }
