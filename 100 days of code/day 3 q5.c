#include <stdio.h>
int main() {
   float temp,ctemp;
    printf("Enter temp in celsius: ");
    scanf("%f",&temp);
    ctemp=(temp*9/5)+32;
    printf("temperature in fahreheit is: %.2f\n",ctemp);
    return 0;
}
