// Object: Write a program using switch case to display a menu to make
//  choices of vegetables and fruit in each category separate menu is to
//  be display containing three different varieties of vegetable / fruit.
// DATE: 23|10|2024

#include <stdio.h>
void main()
{
    int choise;
    printf("\t\t\t\t\t\t\t\tMenu\n");
    printf("Press 1 for vegitable\n");
    printf("Prees 2 for fruit\n");
    printf("Enter your choise\n");
    scanf("%d", &choise);

    // using nested switch lets make it
    switch (choise)
    {
    case 1:
        printf("\t\t\t\t\t\t\t\t\tMenu\n");
        printf("Enter 1 for APPLE:\n");
        printf("Enter 2 for BANANA: \n");
        printf("Enter 3 for MANGO:\n");
        printf("Enter 4 for GRAPPS: \n");
        scanf("%d", &choise);

        switch (choise)
        {
        case 1:
            printf("APPLE\n");
            break;
        case 2:
            printf("BANANA\n");
            break;
        case 3:
            printf("MANGO\n");
            break;
            printf("GRAPPS\n");
            break;
        default:
            printf("Invalid vegitable:\n");
        }

    case 2:
        printf("\t\t\t\t\t\t\t\t\tMenu\n");
        printf("Enter 1 for LADY FINGER:\n");
        printf("Enter 2 for TOMATO : \n");
        printf("Enter 3 for BRINGLE:\n");
        printf("Enter 4 for POTATO: \n");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            printf("LADY FINGER\n");
            break;
        case 2:
            printf("TOMATO\n");
            break;
        case 3:
            printf("BRINGLE\n");
            break;
        case 4:
            printf("POTATO\n");
            break;
        default:
            printf("Invalid vegitable:\n");
        }
    }
    printf("THANK YOU ");
}