//Print each character of a string on a new line
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
    for(i=0;i<len;i++)
    {
        printf("%c\n",str[i]);
    }
    return 0;
}
