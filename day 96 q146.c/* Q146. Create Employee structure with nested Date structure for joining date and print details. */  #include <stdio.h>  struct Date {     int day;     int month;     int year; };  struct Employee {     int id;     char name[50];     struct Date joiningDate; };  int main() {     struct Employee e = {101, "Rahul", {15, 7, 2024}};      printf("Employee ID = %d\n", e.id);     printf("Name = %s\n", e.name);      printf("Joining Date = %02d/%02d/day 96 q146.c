/*
Q146. Create Employee structure with nested Date
structure for joining date and print details.
*/

#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    int id;
    char name[50];
    struct Date joiningDate;
};

int main()
{
    struct Employee e = {101, "Rahul", {15, 7, 2024}};

    printf("Employee ID = %d\n", e.id);
    printf("Name = %s\n", e.name);

    printf("Joining Date = %02d/%02d/%d",
           e.joiningDate.day,
           e.joiningDate.month,
           e.joiningDate.year);

    return 0;
}
