/*
Q125. Open an existing file in append mode and allow
the user to enter a new line of text.
Append the text at the end without overwriting
existing content.
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char str[200];

    fp = fopen("input.txt", "a");

    if(fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    printf("Enter a new line: ");
    fgets(str, sizeof(str), stdin);

    fputs(str, fp);

    fclose(fp);

    printf("Text appended successfully");

    return 0;
}
