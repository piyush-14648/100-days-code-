#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int currentSum, maxSum;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    currentSum = arr[0];
    maxSum = arr[0];

    for(i = 1; i < n; i++)
    {
        // Start new subarray or extend previous one
        if(currentSum + arr[i] > arr[i])
        {
            currentSum = currentSum + arr[i];
        }
        else
        {
            currentSum = arr[i];
        }

        // Update maximum sum
        if(currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }

    printf("Maximum subarray sum = %d", maxSum);

    return 0;
}
