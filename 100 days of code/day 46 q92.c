//Find the first repeating lowercase alphabet in a string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],freq[100];
    int i,k=0,j;
    printf("enter a string:");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
        for(j=i+1;j<strlen(str);j++)
        {
           if (str[i]==str[j])
           printf("first repeating alphabet is %c",str[i]);
        }
    }
}
}
