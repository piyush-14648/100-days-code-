//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main(){
  int i,n,sum=0;
  printf("Enter the value of n: ");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
    if (i%2!=0)
    sum+=i;
  }
  printf("The sum of first n odd numbers is %d ", sum);
  return 0;
}
