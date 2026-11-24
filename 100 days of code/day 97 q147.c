/*
Q147. Store employee data in a binary file using
fwrite() and read using fread().
*/

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e1 = {101, "Rahul", 50000};
    struct Employee e2;

    FILE *fp;

    fp = fopen("employee.dat", "wb");

    if(fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    fwrite(&e1, sizeof(struct Employee), 1, fp);

    fclose(fp);

    fp = fopen("employee.dat", "rb");

    if(fp == NULL)
    {
        printf("Error reading file");
        return 1;
    }

    if(fread(&e2, sizeof(struct Employee), 1, fp) != 1)
    {
        printf("Error reading employee data");
        fclose(fp);
        return 1;
    }

    printf("Employee ID = %d\n", e2.id);
    printf("Name = %s\n", e2.name);
    printf("Salary = %.2f\n", e2.salary);

    fclose(fp);

    return 0;
}
