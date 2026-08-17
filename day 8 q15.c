#include <stdio.h>
#include <string.h> //to use string functions in the program
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if (ch>=65 && ch<=90)
    printf("uppercase");
    else if(ch>=97 && ch<=122)
    printf("lowercase");
    else if(ch>=48 && ch<=57) // else if(ch>='0' && ch<='9')   ''-->single quotes are character & ""-->double quotes is a str
    printf("digit");
    else 
    printf("special character");
    return 0;
}
