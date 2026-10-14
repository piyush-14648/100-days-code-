#include <stdio.h>

int main()
{
    int arr[100], n, i, j;
    int leftSum, rightSum;
    int pivot = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        leftSum = 0;
        rightSum = 0;

        // Sum of elements before index i
        for(j = 0; j < i; j++)
        {
            leftSum += arr[j];
        }

        // Sum of elements after index i
        for(j = i + 1; j < n; j++)
        {
            rightSum += arr[j];
        }

        if(leftSum == rightSum)
        {
            pivot = i;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}
