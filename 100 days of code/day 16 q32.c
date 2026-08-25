//Write a program to check if a number is a palindrome.
#include <stdio.h>
int main()
{
     int n,a,r,rev=0;
     printf("enter a number: ");
     scanf("%d",&n);
      a=n;
      while(n!=0)
      {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
      }
    if (rev==a)
    printf("The number is  pallindrome");
    else
    printf("The number is not pallindrome");
    return 0;
}
