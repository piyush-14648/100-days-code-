nclude <stdio.h>
#include <string.h> //to use string functions in the program
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if (strchr("AEIOUaeiou",ch))    //string character --> String mein character search
    printf("Vowel");
    else
    printf("Consonant");
    return 0;
}
