/*
Q145. Return a structure containing top student's
details from a function.
*/

#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopper(struct Student s[], int n)
{
    int i, maxIndex = 0;

    for(i = 1; i < n; i++)
    {
        if(s[i].marks > s[maxIndex].marks)
        {
            maxIndex = i;
        }
    }

    return s[maxIndex];
}

int main()
{
    struct Student s[3] = {
        {"Rahul", 101, 85.5},
        {"Aman", 102, 92.0},
        {"Priya", 103, 88.5}
    };

    struct Student topper;

    topper = findTopper(s, 3);

    printf("Top Student:\n");
    printf("Name = %s\n", topper.name);
    printf("Roll Number = %d\n", topper.roll_no);
    printf("Marks = %.2f\n", topper.marks);

    return 0;
}
