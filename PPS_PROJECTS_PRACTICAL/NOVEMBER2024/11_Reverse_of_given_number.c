// Object: Write a program in c to input any three digit number and print reverse of its number.
#include <stdio.h>
int main()
{
    int num, rem, rev = 0;
    printf("\nEnter a  more than 2 digit number to print its reverse \n");
    scanf("%d", &num);
    int num1 = num;

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    printf("Before number %d\n", num1);
    printf("After reverse number %d\n", rev);
}