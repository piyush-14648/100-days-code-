//Write a program to input a character and check whether it is a vowel or consonant using if–else
include <stdio.h>
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
