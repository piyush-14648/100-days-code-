#include <stdio.h>

int main()
{
    int arr[100], n, i, j;
    int count, majority = -1;
    int found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        count = 0;

        // Count frequency of arr[i]
        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > n / 2)
        {
            majority = arr[i];
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("%d", majority);
    }
    else
    {
        printf("-1");
    }

    return 0;
}
