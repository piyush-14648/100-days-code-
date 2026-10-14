#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, k, n;
    int count, max = 0, found;

    printf("Enter a string: ");
    scanf("%99s", str);

    n = strlen(str);

    // Start checking from each character
    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = i; j < n; j++)
        {
            found = 0;

            // Check if current character already appeared
            for(k = i; k < j; k++)
            {
                if(str[k] == str[j])
                {
                    found = 1;
                    break;
                }
            }

            // Stop if a repeated character is found
            if(found == 1)
            {
                break;
            }

            count++;

            if(count > max)
            {
                max = count;
            }
        }
    }

    printf("Length = %d", max);

    return 0;
}
