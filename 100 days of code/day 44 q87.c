//Count spaces, digits, and special characters in a string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int spaces=0,digits=0,spc=0,i;
    printf("enter a string:");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
        spaces+=1;
        else if(str[i]>='0' && str[i]<='9') //48 ya 57 wihtout quotes
        digits+=1;
        else if(str[i]>=65 && str[i]<=90)  || (str[i]>=97 && str[i]<=122))
        continue;
        else
        spc+=1;
    }
    printf("number of spaces in string are %d\n",spaces);
    printf("number of digits in string are %d\n",digits);
    printf("number of special charaacters in string are %d",spc);
}
