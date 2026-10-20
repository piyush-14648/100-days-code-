/*
Q118. Write a program to take an input array of size n.
The array should contain all the integers between 0 to n
except for one. Print that missing number.
*/

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int sum1 = 0, sum2, missing;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum1 = sum1 + arr[i];
    }

    sum2 = (n * (n + 1)) / 2;

    missing = sum2 - sum1;

    printf("%d", missing);

    return 0;
}
