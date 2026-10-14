#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    // Both strings must have equal lengths
    if(strlen(str1) != strlen(str2))
    {
        printf("Not a rotation");
    }
    else
    {
        strcpy(temp, str1);
        strcat(temp, str1);  // Join str1 with itself

        if(strstr(temp, str2) != NULL)
        {
            printf("Strings are rotations");
        }
        else
        {
            printf("Not a rotation");
        }
    }

    return 0;
}
