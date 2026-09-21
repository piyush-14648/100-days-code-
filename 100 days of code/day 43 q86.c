//Reverse a string
#include <stdio.h>
#include<string.h>
int main()
{
    char str[50];
    char temp,org[50];
    int k=0,len=0;
    printf("enter a string:");
    gets(str);
    strcpy(org,str);
    while(str[k]!='\0')
    {
        len++;
        k++;
    }
    int i=0,j=len-1;
    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    if(strcmp(org,str)==0)
    printf("string is pallindrome");
    else
    printf("string is not pallindrome");
    return 0;
}
