#include <stdio.h>

int main()
{
    int arr[100], n, i, j;
    int product;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        product = 1;

        // Multiply all elements except arr[i]
        for(j = 0; j < n; j++)
        {
            if(i != j)
            {
                product = product * arr[j];
            }
        }

        printf("%d ", product);
    }

    return 0;
}
