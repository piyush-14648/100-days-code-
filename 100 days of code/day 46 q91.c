#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; i < strlen(str); i++)
    {
        // Check whether character is a vowel
        if(str[i] != 'a' && str[i] != 'e' &&
           str[i] != 'i' && str[i] != 'o' &&
           str[i] != 'u' && str[i] != 'A' &&
           str[i] != 'E' && str[i] != 'I' &&
           str[i] != 'O' && str[i] != 'U')
        {
            result[j] = str[i];
            j++;
        }
    }

    // End the string
    result[j] = '\0';

    printf("String after removing vowels: %s", result);

    return 0;
}
