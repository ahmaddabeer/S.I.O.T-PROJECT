// Object : Write a program in c to print number in word

#include <stdio.h>
int main()
{
    int num, p, rev = 0, rem;
    printf("Enter any number \n");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    while (rev != 0)
    {
        p = rev % 10;

        switch (p)
        {

        case 0:
            printf("Zero");
            break;
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
        }
        rev = rev / 10;
    }
}