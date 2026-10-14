#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j, negative;

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

    for(i = 0; i <= n - k; i++)
    {
        negative = 0;

        // Search first negative in current window
        for(j = i; j < i + k; j++)
        {
            if(arr[j] < 0)
            {
                negative = arr[j];
                break;
            }
        }

        printf("%d ", negative);
    }

    return 0;
}
