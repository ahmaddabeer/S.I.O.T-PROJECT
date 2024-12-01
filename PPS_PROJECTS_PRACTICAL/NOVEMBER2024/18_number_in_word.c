#include <stdio.h>

int main()
{
    int num;
    char choice;

    do
    {
        // Ask the user to enter a number
        printf("Enter a number: ");
        scanf("%d", &num);

        // Arrays for word representation of numbers
        char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        char *teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

        // Check for hundreds place
        if (num / 100 > 0)
        {
            printf("%s Hundred ", ones[num / 100]);
            num = num % 100;
        }

        // Check for tens place (20 and above)
        if (num >= 20)
        {
            printf("%s ", tens[num / 10]);
            num = num % 10;
        }

        // Check for teen numbers (10-19)
        if (num >= 10)
        {
            printf("%s ", teens[num - 10]);
            num = 0;
        }

        // Check for ones place (1-9)
        if (num > 0)
        {
            printf("%s", ones[num]);
        }

        printf("\n");

        // Ask if the user wants to continue
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); // space before %c to consume any extra newline character

    } while (choice == 'y' || choice == 'Y'); // Repeat if the user enters 'y' or 'Y'

    printf("Exiting the program.\n");
    return 0;
}
