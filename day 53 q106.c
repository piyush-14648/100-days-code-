#include <stdio.h>

int main()
{
    int arr[100], n, i, j;
    int nextGreater;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        nextGreater = -1;

        // Search on the right side of arr[i]
        for(j = i + 1; j < n; j++)
        {
            if(arr[j] > arr[i])
            {
                nextGreater = arr[j];
                break;
            }
        }

        // Print comma-separated output
        if(i > 0)
        {
            printf(",");
        }

        printf("%d", nextGreater);
    }

    return 0;
}
