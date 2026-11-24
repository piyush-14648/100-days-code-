/*
Q148. Take two structs as input and check
if they are identical.
*/

#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

int main()
{
    struct Student s1, s2;

    printf("Enter first student (name, roll, marks): ");
    scanf("%49s %d %f", s1.name, &s1.roll_no, &s1.marks);

    printf("Enter second student (name, roll, marks): ");
    scanf("%49s %d %f", s2.name, &s2.roll_no, &s2.marks);

    if(strcmp(s1.name, s2.name) == 0 &&
       s1.roll_no == s2.roll_no &&
       s1.marks == s2.marks)
    {
        printf("Both structures are identical");
    }
    else
    {
        printf("Structures are different");
    }

    return 0;
}
