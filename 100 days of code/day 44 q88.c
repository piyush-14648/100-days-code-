//Replace spaces with hyphens in a string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i;
    printf("enter a string:");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
        str[i]='-';
    }
    puts(str);
}
