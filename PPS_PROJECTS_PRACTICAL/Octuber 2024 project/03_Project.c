// Qustion : Write a program in  C  to print area of circle.
// Solution : First we seriously read the qustion and then you find what is ask qustion to you and then solve.
////DATE: 07|10|2024
#include <stdio.h>
void main()
{
    // if we need only for radius because pi is constant. so decleair variable
    float r, area;
    // Take user input
    printf("Enter cirlce radius calculate area of circle");
    scanf("%f", &r);
    // calcultation
    area = 3.14 * r;
    printf("Area of circle is : %d", area);
}