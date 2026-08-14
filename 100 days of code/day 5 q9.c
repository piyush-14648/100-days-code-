#include <stdio.h>
#include <math.h>
int main() {
  int p,r,t;
  float si,ci;
  printf("enter principal,rate and time: ");
  scanf("%d %d %d",&p,&r,&t);
  si=(p*r*t)/100;
  ci=p*pow(1+r/100.00,t)-p;
  printf("simple interest = %.2f\n",si);
  printf("compound interest = %.2f\n",ci);
    return 0;
}
// Method 2:
// take r as float 
// ci=p*pow(1+r/100,t)-p;
// It will give the same output
