#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d", a + b);
    printf("diff = %d\n", a - b);
    printf("product = %d\n", a * b);
    printf("division = %d\n", a / b);
    return 0;
}
