/*
Q138. Print all enum names and integer
values using a loop.
*/

#include <stdio.h>

enum Days
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
};

int main()
{
    char *names[] = {
        "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY"
    };

    int i;

    for(i = MONDAY; i <= FRIDAY; i++)
    {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}
