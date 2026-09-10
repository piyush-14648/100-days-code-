// Find the digit that occurs the most times in an integer number.
#include <stdio.h>
#include <limits.h>
int main()
{
    int n,r,i,digit;
    int max=INT_MIN; // OR max=0 which at line 19, freq can't be negative
    int freq[10]={0}; //10 boxes are made,each havinng 0 in it [mtlb 10 size ka array bangyaa har element 0 hai] 
    printf("enter a number:"); 
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        freq[r]=freq[r]+1;
        n=n/10;
    }
    for(i=0;i<=9;i++)
    {
        if(freq[i]>max)
        {
            max=freq[i];  //here, max is counting the frequency of the most occured digit
            digit=i;   //here, i is the index and digit is also the index bcz digit=i
        }
    }
    printf("highest frequency is of %d which is %d",digit,max);
    return 0;
}

