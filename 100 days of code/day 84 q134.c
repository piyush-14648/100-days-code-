/*
Q134. Define an enum with SUCCESS, FAILURE, and TIMEOUT,
and print messages accordingly.
*/

#include <stdio.h>

enum Status {SUCCESS, FAILURE, TIMEOUT};

int main()
{
    enum Status s;
    int n;

    printf("Enter status (0-SUCCESS, 1-FAILURE, 2-TIMEOUT): ");
    scanf("%d", &n);

    s = (enum Status)n;

    switch(s)
    {
        case SUCCESS:
            printf("Operation Successful");
            break;

        case FAILURE:
            printf("Operation Failed");
            break;

        case TIMEOUT:
            printf("Operation Timed Out");
            break;

        default:
            printf("Invalid Status");
    }

    return 0;
}
