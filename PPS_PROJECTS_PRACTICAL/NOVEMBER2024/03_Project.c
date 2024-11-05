// Object : Write a program in c to check the given charakter is vowels or consonents using switch case.
// DTAE: 04|11|2024
#include <stdio.h>
void main()
{
    char c;
    // take user charakter
    printf("Enter charakter to check vowels or consonant :\n");
    scanf("%c", &c);
    switch (c)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'I':
    case 'i':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("Yes this is vowel \n");
        break;
    default:
        printf("Consonant\n");
    }
    printf("Thank you");
}