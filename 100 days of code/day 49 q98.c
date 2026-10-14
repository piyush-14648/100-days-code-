#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, last = 0;

    printf("Enter your full name: ");
    fgets(str, sizeof(str), stdin);

    // Find the starting index of surname
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ' && str[i + 1] != ' ')
        {
            last = i + 1;
        }
    }

    // Print initials before surname
    printf("%c.", str[0]);

    for(i = 1; i < last - 1; i++)
    {
        if(str[i - 1] == ' ' && str[i] != ' ')
        {
            printf("%c.", str[i]);
        }
    }

    // Print surname in full
    printf(" %s", str + last);

    return 0;
}
