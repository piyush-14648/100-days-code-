#include <stdio.h>

int main()
{
    int arr[100], n, i, j, greater;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        greater = -1;

        // Check elements on the left
        for(j = i - 1; j >= 0; j--)
        {
            if(arr[j] > arr[i])
            {
                greater = arr[j];
                break;
            }
        }

        if(i > 0)
            printf(",");

        printf("%d", greater);
    }

    return 0;
}
