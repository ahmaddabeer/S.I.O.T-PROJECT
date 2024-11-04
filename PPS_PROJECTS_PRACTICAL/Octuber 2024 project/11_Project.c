/*
 *Qustion: Write a program in c to calculate grestest number amoung three number.
 By using if else condition
 //  DATE: 18|10|2024
 */
#include <stdio.h>
void main()
{
    int a, b, c; // Declair varibale
    printf("Enter a :");
    scanf("%d", &a);
    printf("Enter b :");
    scanf("%d", &b);
    printf("Enter c :");
    scanf("%d", &c);
    // Caclulation
    if (a > b && a > c)
        printf("a is greater number");
    else if (b > c)
        printf("b is greater number");
    else
        printf("c isgreater");
}