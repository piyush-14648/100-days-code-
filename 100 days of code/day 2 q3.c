//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main() {
    int peri,area,l,b;
    printf("Enter length and breadth: ");
    scanf("%d %d", &l, &b);
    peri=2*(l+b);
    area=l*b;
    printf("the perimeter of rectangle is %d\n",peri);
    printf("the area of reectangle is %d\n",area);
    return 0;
}
