/*
Q143. Find and print the student with the highest marks.
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
    struct Student s[5];
    int i, maxIndex = 0;

    for(i = 0; i < 5; i++)
    {
        printf("Enter name, roll number and marks: ");
        scanf("%49s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    for(i = 1; i < 5; i++)
    {
        if(s[i].marks > s[maxIndex].marks)
        {
            maxIndex = i;
        }
    }

    printf("\nStudent with Highest Marks:\n");
    printf("Name = %s\n", s[maxIndex].name);
    printf("Roll Number = %d\n", s[maxIndex].roll_no);
    printf("Marks = %.2f\n", s[maxIndex].marks);

    return 0;
}
