#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j;
    int sum, maxSum;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if(k < 1 || k > n)
    {
        printf("Invalid k");
        return 0;
    }

    maxSum = 0;

    for(j = 0; j < k; j++)
    {
        maxSum += arr[j];
    }

    // Check every subarray of size k
    for(i = 1; i <= n - k; i++)
    {
        sum = 0;

        for(j = i; j < i + k; j++)
        {
            sum += arr[j];
        }

        if(sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("Maximum sum = %d", maxSum);

    return 0;
}
