#include <stdio.h>

int main()
{
    int arr[100], n, target;
    int i, j, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    // Check every pair of elements
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                printf("%d %d", i, j);
                found = 1;
                break;
            }
        }

        if(found == 1)
        {
            break;
        }
    }

    // If no pair is found
    if(found == 0)
    {
        printf("-1 -1");
    }

    return 0;
}
