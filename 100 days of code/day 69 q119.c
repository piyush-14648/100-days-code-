/*
Q119. Write a program to take an integer array as input.
Only one element will be repeated.
Print the repeated element.
Try to find the result in a single iteration.
*/

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int result = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        result = result ^ arr[i];

        if(i < n - 1)
        {
            result = result ^ (i + 1);
        }
    }

    printf("%d", result);

    return 0;
}
