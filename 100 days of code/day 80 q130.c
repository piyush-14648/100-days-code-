/*
Q130. Store multiple student records (name, roll number,
marks) into a file using fprintf().
Then read them using fscanf() and display each record.
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int roll, n, i;
    float marks;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fp = fopen("students.txt", "w");

    if(fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    for(i = 0; i < n; i++)
    {
        printf("Enter name, roll number and marks: ");
        scanf("%49s %d %f", name, &roll, &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    if(fp == NULL)
    {
        printf("Error reading file");
        return 1;
    }

    while(fscanf(fp, "%49s %d %f", name, &roll, &marks) == 3)
    {
        printf("Name: %s, Roll: %d, Marks: %.2f\n",
               name, roll, marks);
    }

    fclose(fp);

    return 0;
}
