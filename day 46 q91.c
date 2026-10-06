//Remove all vowels from a string.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    // METHOD 1: using != and && (checks "is NOT a vowel", prints directly inside if)
    printf("\nMethod 1 output: ");
    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] != 'a' && str[i] != 'e' &&
           str[i] != 'i' && str[i] != 'o' &&
           str[i] != 'u' && str[i] != 'A' &&
           str[i] != 'E' && str[i] != 'I' &&
           str[i] != 'O' && str[i] != 'U')
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");

    // METHOD 2: using == and || (checks "IS a vowel", skips print using continue)
//     printf("\nMethod 2 output: ");
//     for(i = 0; i < strlen(str); i++)
//     {
//         if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
//            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
//             continue;              // vowel found — skip printing this character
//         printf("%c", str[i]);
//     }
//     printf("\n");

//     return 0;
// }
