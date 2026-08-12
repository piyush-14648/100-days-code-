#include <stdio.h>
int main() {
    int circum,area,r;
    printf("Enter radius: ");
    scanf("%d",&r);
    circum=2*(22/7)*r;
    area=(22/7)*r*r;
    printf("the circumference of circle is %d\n",circum);
    printf("the area of circle is %d\n",area);
    return 0;
}
