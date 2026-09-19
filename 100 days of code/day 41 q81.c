//Count characters in a string without using built-in length functions.
#include <stdio.h>
int main()
{
    char str[50] = "Piyush";
    int len=0;
    int i=0;
    while(str[i]!='\0')
    {
        len++;
        i++;
    }
    printf("no. of characters in string are %d",len);
    return 0;
}
