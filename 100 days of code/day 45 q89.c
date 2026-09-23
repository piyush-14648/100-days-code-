//Count frequency of a given character in a string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],search;
    int i,count=0;
    printf("enter a string:");
    gets(str);
    puts("enter a character:");
    scanf("%c",&search);    //cant use gets here bccz it doesnt take a single character
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==search)   //ab character ka character se comparison ho rha ha
        count++;
    }
    printf("frequency of the given character in the string is %d",count);
}
