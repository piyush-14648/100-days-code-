#include <stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    if (n >= 0)
    {
        if (n == 0)
        {
            printf("zero");
        }
        else
        {
            printf("number is positive");
        }
    }    
    else
      {
         printf("negative");
      }
    return 0;
}
