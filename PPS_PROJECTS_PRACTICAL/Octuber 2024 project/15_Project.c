// Qustion: By using switch case to make simple program to calculate addition division multiplication difference
// DATE:22|10|2024
#include <stdio.h>
void main()
{
    char choise;
    int n1, n2, total;
    printf("\t\t\t\t\t\t\t\t\t\t menu:\n");
    printf("Enter + for additionn : \n");
    printf("Enter - for subtraction : \n");
    printf("Enter * for multiplication : \n");
    printf("Enter / for devision : \n");
    scanf("%c", &choise);
    // Create a switch case
    switch (choise)
    {
    case '+':
        printf("Enter any to given number : \n");
        scanf("%d%d", &n1, &n2);
        total = n1 + n2;
        printf("Tha addion of %d + %d is = %d\n", n1, n2, total);
        break;
    case '-':
        printf("Enter any two given number ");
        scanf("%d%d", &n1, &n2);
        total = n1 - n2;
        printf("The given number diffrence %d - %d is = %d\n ", n1, n2, total);
        break;
    case '*':
        printf("Enter any two number :\n");
        scanf("%d%d", &n1, &n2);
        total = n1 * n2;
        printf("The given number multiplication %d * %d is = %d \n", n1, n2, total);
        break;
        printf("Enter any two number :\n");
        scanf("%d%d", &n1, &n2);
        total = n1 / n2;
        printf("The given number division %d / %d = %d\n", n1, n2, total);
    default:
        printf("you enter invalid operent please try again");
    }
    printf("Thank you ");
}