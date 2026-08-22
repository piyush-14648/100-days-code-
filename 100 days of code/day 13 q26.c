//Write a program to print numbers from 1 to n.
#include <stdio.h>
int main() 
{
  int i,n;
  printf("enter value of n: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  printf("numbers from 1 to n are %d",i);
  return 0;
}
