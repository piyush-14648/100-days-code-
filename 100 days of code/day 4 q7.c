#include <stdio.h>
int main() {
  int a,b;
    printf("Enter two numbers a and b:\n ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("numbers after swapping are:%d %d",a,b);
    return 0;
}
/*method 2
a=(a+b)-(b=a);
printf("numbers after swapping are:%d %d",a,b);
*/
