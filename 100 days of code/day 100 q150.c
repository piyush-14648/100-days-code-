/*
Q150. Use pointer to struct to modify and
display data using -> operator.
*/

#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

int main()
{
    struct Student s = {"Rahul", 101, 85.5};

    // Declare a pointer to the structure
    struct Student *ptr = &s;

    // Modify structure members using arrow operator
    ptr->roll_no = 102;
    ptr->marks = 95.5;

    // Display updated details using arrow operator
    printf("Name = %s\n", ptr->name);
    printf("Roll Number = %d\n", ptr->roll_no);
    printf("Marks = %.2f\n", ptr->marks);

    return 0;
}
