// Object : Write a program in to input any alphabet and check the given alphabet is vowels or consonent.claculate using if.
// DATE: 04|11|2024
#include <stdio.h>
void main()
{
    char c;
    // take user charakter
    printf("Enter charakter to check vowels or consonant :\n");
    scanf("%c", &c);
    // calculate using if
    if (c == 'A' || c == 'a' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
        printf("Yes you enter a vowel \n");
    else
        printf("Yes this a consonent\n");
    printf("Thank You");
}