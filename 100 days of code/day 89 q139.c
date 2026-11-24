/*
Q139. Show that enums store integers
by printing assigned values.
*/

#include <stdio.h>

enum Status
{
    SUCCESS = 10,
    FAILURE = 20,
    PENDING = 30
};

int main()
{
    enum Status s1 = SUCCESS;
    enum Status s2 = FAILURE;
    enum Status s3 = PENDING;

    printf("SUCCESS = %d\n", s1);
    printf("FAILURE = %d\n", s2);
    printf("PENDING = %d\n", s3);

    return 0;
}
