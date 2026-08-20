// Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>
int main()
{
    int month;
    printf("enter the month number from 1 to 2: ");
    scanf("%d",&month);
    switch(month)
    {
        case 1 :
        printf("January-->31 days\n ");
        break;
        case 2 :
        printf("February-->28 days\n ");
        break;
        case 3 :
        printf("March-->31 days\n ");
        break;
        case 4 :
        printf("April-->30 days\n ");
        break;
        case 5 :
        printf("May-->31 days\n ");
        break;
        case 6:
        printf("june-->30 days\n ");
        break;
        case 7 :
        printf("July-->31 days\n ");
        break;
        case 8 :
        printf("August-->31 days\n ");
        break;
        case 9 :
        printf("september-->30 days\n ");
        break;
        case 10 :
        printf("october-->31 days\n ");
        break;
        case 11 :
        printf("november-->30 days\n ");
        break;
        case 12 :
        printf("december-->31 days\n ");
        break;
        default:
        printf("wrong choice");
    }    
    return 0;
    
}
