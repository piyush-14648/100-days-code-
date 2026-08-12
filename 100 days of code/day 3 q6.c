#include <stdio.h>
int main() {
  int a,b,temp;
    printf("Enter two numbers a and b:\n ");
    scanf("%d %d",&a,&b);
    printf("a=%d ",a);
    printf("b=%d\n",b);
    temp=a;
    a=b;
    b=temp;
    printf("numbers after swapping are:");
    printf("a=%d ",a);
    printf("b=%d",b);
    return 0;
}
