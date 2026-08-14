#include <stdio.h>
#include <math.h>
int main() {
 int t_sec;
 printf("Enter time in seconds:");
 scanf("%d",&t_sec);
 printf("time in hours is: %d",t_sec/3600);
 printf("time in minutes is: %d",t_sec/60);
    return 0;
}
