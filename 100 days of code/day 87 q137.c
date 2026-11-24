/*
Q137. Create an enum for user roles
(ADMIN, USER, GUEST) and display
messages based on role.
*/

#include <stdio.h>

enum Role
{
    ADMIN = 1,
    USER,
    GUEST
};

int main()
{
    int choice;

    printf("Enter role (1-ADMIN, 2-USER, 3-GUEST): ");
    scanf("%d", &choice);

    switch(choice)
    {
        case ADMIN:
            printf("Welcome Admin");
            break;

        case USER:
            printf("Welcome User");
            break;

        case GUEST:
            printf("Welcome Guest");
            break;

        default:
            printf("Invalid Role");
    }

    return 0;
}
