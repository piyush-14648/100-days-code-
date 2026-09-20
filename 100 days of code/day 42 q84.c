//Convert a lowercase string to uppercase without using built-in functions
#include <stdio.h>
#include <string.h>
int main()
{
   int i;
   char str[100];
   
   printf("enter a string:");
   gets(str);
   for(i=0;i<strlen(str);i++)
   {
     if(str[i]>=97 && str[i]<=122)
     str[i]=str[i]-32;
   }
   printf("new string is: %s\n",str);
}
