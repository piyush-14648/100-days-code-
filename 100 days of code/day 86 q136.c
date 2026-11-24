/*
Q136. Use enum to represent menu choices
(ADD, SUBTRACT, MULTIPLY) and perform
operations using switch.
*/

#include <stdio.h>

enum Operation
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1. Add\n2. Subtract\n3. Multiply\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case ADD:
            printf("Result = %d", a + b);
            break;

        case SUBTRACT:
            printf("Result = %d", a - b);
            break;

        case MULTIPLY:
            printf("Result = %d", a * b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
