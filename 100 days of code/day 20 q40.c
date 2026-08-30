//Write a program to find the 1’s complement of a binary number and print it.
//method 1-->
#include <stdio.h>
int main()
{
    int n, r, rev = 0, digits;

    printf("Enter number of digits: ");
    scanf("%d", &digits);

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }

    while(digits > 0)
    {
        r = rev % 10;

        if(r == 0)
            printf("1");
        else
            printf("0");

        rev = rev / 10;
        digits--;
    }
    return 0;
}


//method 2-->
#include <stdio.h>
int main()
{
    int n, r, result = 0, place = 1;
    printf("enter a binary number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        r = n % 10;
        if (r == 0)
            r = 1;
        else
            r = 0;
        result = result + r * place;
        place = place * 10;
        n = n / 10;  
    }
    printf("1's complement is %d", result);
    return 0;
}
