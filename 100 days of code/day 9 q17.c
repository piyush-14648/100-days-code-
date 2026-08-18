//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,D;
    printf("enter value of a,b,c ");
    scanf("%lf %lf %lf",&a,&b,&c);
    D=(b*b)-(4*a*c);
    if (D>0)
    printf("roots are real and different: %.2lf  %.2lf",(-b+sqrt(D))/(2*a),(-b-sqrt(D))/(2*a));
    else if (D==0)
    printf("roots are real and equal: %.2lf", -b/(2*a));
    else 
    printf("roots are not real");
    return 0;
}
//Discriminant	Roots	Formula
// D > 0	Real and different	(-b ± √D) / 2a
// D = 0	Real and same	-b / 2a
// D < 0	not real roots
  
