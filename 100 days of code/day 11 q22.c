// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main()
{
    float cp,sp,per;
    printf("enter selling price and cost price: ");
    scanf("%f %f",&cp,&sp);
    if (sp>cp)
    {
    per=((sp-cp)/cp)*100;
    printf("profit percentage is %.0f \n",per);
    }
    else if (cp>sp)
    {
    per=((cp-sp)/cp)*100;
    printf("loss percentage is %.0f \n",per);
    }
    else
    {
    printf("no profit no loss");
    }
    return 0;
}
