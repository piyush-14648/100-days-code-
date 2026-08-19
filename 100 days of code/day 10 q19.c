// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main()
{
    int s1,s2,s3;
    printf("enter 3 sides of a triangle");
    scanf("%d %d %d",&s1,&s2,&s3);
    if (s1==s2 && s2==s3 && s1==s3)
    printf("equilateral triangle");
    else if (s1==s2 && s2!=s3 || s2==s3 && s3!=s1 || s1==s3 && s3!=s2)
    printf("isoscles triangle");
    else 
    printf("scalene triangle");
}
