// Object: Write a program in c to input any charakter and check the given character is alphabed, number or spetial character
// DATE: 04|11|2024
#include <stdio.h>

void main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    // Check if the character is a lowercase alphabet
    if (c >= 'a' && c <= 'z')
    {
        printf("The given character is a small alphabet.\n");
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            printf("and also a vowel.\n");
        }
        else
        {
            printf("and also a consonant.\n");
        }
    }
    // Check if the character is an uppercase alphabet
    else if (c >= 'A' && c <= 'Z')
    {
        printf("The given character is a capital alphabet.\n");
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            printf("and also a vowel.\n");
        }
        else
        {
            printf("and also a consonant.\n");
        }
    }
    // Check if the character is a digit
    else if (c >= '0' && c <= '9')
    {
        printf("The given character is a number.\n");
    }
    // Check if the character is a special character
    else if ((c >= 32 && c <= 47) || (c >= 58 && c <= 64) ||
             (c >= 91 && c <= 96) || (c >= 123 && c <= 126))
    {
        printf("Yes, it is a special character.\n");
    }
    // Invalid character
    else
    {
        printf("Sorry, invalid character. Try again.\n");
    }

    printf("Thank you!\n");
}
