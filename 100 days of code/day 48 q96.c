#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], temp;
    int i, j, start = 0, end;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline
    str[strcspn(str, "\n")] = '\0';

    for(i = 0; i <= strlen(str); i++)
    {
        // When space or end of string is found
        if(str[i] == ' ' || str[i] == '\0')
        {
            end = i - 1;
            j = start;

            // Reverse current word
            while(j < end)
            {
                temp = str[j];
                str[j] = str[end];
                str[end] = temp;

                j++;
                end--;
            }

            start = i + 1; // Start of next word
        }
    }

    printf("Output: %s", str);

    return 0;
}
