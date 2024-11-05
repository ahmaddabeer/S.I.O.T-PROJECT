// Object: Write a program in C to calculate the ASCII value and print the character.
// DATE:

#include <stdio.h>
void main()
{
    int c;
    printf("Enter number between 0-225\n");
    scanf("%d", &c);
    // Print there value given by user
    printf("The ASCII code %d value is %c is:", c, c);
}