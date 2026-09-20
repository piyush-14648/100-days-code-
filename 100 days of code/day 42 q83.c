//Count vowels and consonants in a string.
#include <stdio.h>
#include <string.h>
int main()
{
   int i,vcount=0,ccount=0;
   char str[100];
   
   printf("enter a string:");
   gets(str);
   for(i=0;i<strlen(str);i++)
   {
     if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
      vcount+=1;
     else if(str[i]>='A' && str[i]<='Z' || str[i]>'a' && str[i]<'z')
      ccount+=1;
   }
   printf("number of vowels in the string are: %d\n",vcount);
   printf("number of consonants in the string are %d",ccount);
}
