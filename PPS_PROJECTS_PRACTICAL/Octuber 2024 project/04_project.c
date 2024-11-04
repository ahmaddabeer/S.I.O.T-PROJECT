// Qustion : Write a program in C to calculate and print area of trangle
// formulla is { a = 0.5*b*h} if we need only base of height.
//DATE: 07|10|2024
#include <stdio.h>
void main()
{
    float b, h, area;
    // Take user input
    printf("Enter Base and Height of the trangle:\n ");
    scanf("%f%f", &b, &h);
    // calcutation
    area = 0.5 * (b * h);
    printf("Area or a trangle is : %.3f", area);
}