//Toggle case of each character in a string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i;;
    printf("enter a string:");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>=65 && str[i]<=90)
        str[i]=str[i]+32;
        else if(str[i]>=97 && str[i]<=122)
        str[i]=str[i]-32;
    }
    puts(str);
}
