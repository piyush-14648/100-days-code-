#include <stdio.h>

int main()
{
    int day, month, year;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    // Convert month number 04 to Apr
    if(month == 4)
    {
        printf("%02d-Apr-%04d", day, year);
    }
    else
    {
        printf("Invalid month for this question");
    }

    return 0;
}
