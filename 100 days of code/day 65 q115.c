#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], t[100];
    int freq[26] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    scanf("%99s", s);

    printf("Enter second string: ");
    scanf("%99s", t);

    // First check lengths
    if(strlen(s) != strlen(t))
    {
        flag = 0;
    }
    else
    {
        // Increase frequency for first string
        for(i = 0; s[i] != '\0'; i++)
        {
            freq[s[i] - 'a']++;
        }

        // Decrease frequency for second string
        for(i = 0; t[i] != '\0'; i++)
        {
            freq[t[i] - 'a']--;
        }

        // Check if all frequencies are zero
        for(i = 0; i < 26; i++)
        {
            if(freq[i] != 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
    {
        printf("Anagram");
    }
    else
    {
        printf("Not Anagram");
    }

    return 0;
}
