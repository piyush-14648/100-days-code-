#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int freq[256] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    // Check lengths of both strings
    if(strlen(str1) != strlen(str2))
    {
        flag = 0;
    }
    else
    {
        // Count characters of first string
        for(i = 0; i < strlen(str1); i++)
        {
            freq[(unsigned char)str1[i]]++;
        }

        // Subtract characters of second string
        for(i = 0; i < strlen(str2); i++)
        {
            freq[(unsigned char)str2[i]]--;
        }

        // Check whether all frequencies are zero
        for(i = 0; i < 256; i++)
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
        printf("Strings are Anagrams");
    }
    else
    {
        printf("Strings are Not Anagrams");
    }

    return 0;
}
