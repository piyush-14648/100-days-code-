#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], longest[100];
    int i, j, count = 0, max = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Find the longest word
    for(i = 0; i <= strlen(str); i++)
    {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            count++;
        }
        else
        {
            if(count > max)
            {
                max = count;

                // Store the longest word
                for(j = 0; j < count; j++)
                {
                    longest[j] = str[start + j];
                }

                longest[j] = '\0';
            }

            count = 0;
            start = i + 1;
        }
    }

    printf("Longest word is: %s", longest);
    printf("\nLength = %d", max);

    return 0;
}
