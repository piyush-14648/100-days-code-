#include <stdio.h>

int main()
{
    int arr[100][100];
    int n, m, i, j, d;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Diagonal Traversal: ");

    for(d = 0; d < n + m - 1; d++)
    {
        if(d % 2 == 0)
        {
            // Even diagonal: bottom to top
            for(i = n - 1; i >= 0; i--)
            {
                j = d - i;

                if(j >= 0 && j < m)
                {
                    printf("%d ", arr[i][j]);
                }
            }
        }
        else
        {
            // Odd diagonal: top to bottom
            for(i = 0; i < n; i++)
            {
                j = d - i;

                if(j >= 0 && j < m)
                {
                    printf("%d ", arr[i][j]);
                }
            }
        }
    }

    return 0;
}
