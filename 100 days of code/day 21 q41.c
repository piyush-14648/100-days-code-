//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main()
{
    int n,first,end,swap,digit,divide;
    printf("enter a number:"); 
    scanf("%d", &n);     //n=12345

    digit=log10(n);     //it tells place value ka power,indirectly telling digits=4+1=5 , for n=12345 -->digit=4.09=>4
    divide=round(pow(10,digit));  //10000   ,used round function to truncate the value
    first=n/divide;       //12345/10000=1
    n=n%divide;          //12345%10000=2345
    end=n%10;           //2345%10=5
    n=n/10;            //2345/10=234
    swap=end*divide + n*10 + first;    //5*10000 + 2340*10 + 1
    printf("swap value is %d",swap);
    return 0;
}
