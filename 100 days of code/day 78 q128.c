/*
Q128. Read a text file and count how many vowels
and consonants are in the file.
Ignore digits and special characters.
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    int ch;
    int vowels = 0, consonants = 0;

    fp = fopen("input.txt", "r");

    if(fp == NULL)
    {
        printf("File not found");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        if(ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }

        if(ch >= 'a' && ch <= 'z')
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    fclose(fp);

    return 0;
}
