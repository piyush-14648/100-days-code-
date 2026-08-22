//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main() 
{
  int a,b,ch;
  printf("enter two numbers:\n");
  scanf("%d",&a);
  scanf("%d",&b);
  printf("Press 1 for Addition\n");
  printf("Press 2 for Subtraction\n");
  printf("Press 3 for Multiplication\n");
  printf("Press 4 for Division\n");
  printf("Press 5 for getting remainder\n");
  printf("Enter your choice: ");
  scanf("%d",&ch);
  switch (ch)
  {
  case 1:
  {
  int sum;
  sum=a+b;
  printf("The sum of two numbers is %d ",sum);
  break;
  }
  case 2:
  {
  int diff;
  diff=a-b;
  printf("The difference of two numbers is %d ",diff);
  break;
  }
  case 3:
  {
  int pro;
  pro=a*b;
  printf("The product of two numbers is %d ",pro);
  break;
  }
  case 4:
  {
  int div;
  div=a/b;
  printf("The division of two numbers is %d ",div);
  break;
  }
  case 5:
  {
  int rem;
  rem=a%b;
  printf("The remainder by dividing two numbers is %d ",rem);
  break;
  }
  default:{
  printf("Wrong Choice ");
  break;
  }
  }
  return 0;
}
