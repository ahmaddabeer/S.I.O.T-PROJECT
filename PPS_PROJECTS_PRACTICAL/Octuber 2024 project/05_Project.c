// Qustion : Write a program in C to calculate area of trangle using heron's formulla.
//  formulla is : sqrt(s(s-a)*(s-b)*(s-c))& s = a+b+c. so if only take a,b,c.
//DATE: 07|10|2024
#include <stdio.h>
void main()
{
    float a, b, c, s, area;
    // Take user input
    printf("Enter a : ");
    scanf("%f", &a);
    printf("Enter b : ");
    scanf("%f", &b);
    printf("Enter c : ");
    scanf("%f", &c);

    // calcultaion
    s = a + b + c;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("a = %.3f\n b = %.3f\n c = %.3f\n Area of trangal is :%.3f", a, b, c, area);
}