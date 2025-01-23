// Qustion : Write a program in c to convert fohrenheight into celcius.
// formulla is 5*(far-32)/9
//DATE: 09|10|2024
#include <stdio.h>
void main()
{
    float foh, celcius;
    // Take user input
    printf("Enter a tempuratere in fohrenheight :");
    scanf("%f", &foh);
    // Calculation
    celcius = 5 * (foh - 32) / 9;
    printf("Fohrenheight into celcius convertion is : %.3f", celcius);
}