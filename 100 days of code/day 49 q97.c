#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i;

    printf("Enter your full name: ");
    fgets(str, sizeof(str), stdin);

    // First letter of first name
    printf("%c.", str[0]);

    for(i = 1; i < strlen(str); i++)
    {
        // Character after space is an initial
        if(str[i - 1] == ' ' && str[i] != ' ')
        {
            printf("%c.", str[i]);
        }
    }

    return 0;
}
