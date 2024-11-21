// Object: Write a program in c to reverse of given number

#include <stdio.h>
int main()
{
    int num, rev = 0, rem, ch;
    do
    {
        printf("Enter a number ");
        scanf("%d", &num);
        int num1 = num;

        while (num != 0)
        {

            rem = num % 10;
            rev = rev  + (rem*rem*rem);
            num = num / 10;
        }
        printf("Before number %d\n", num1);
        printf("%d After number\n", rev);

        if (num1 == rev)
        {
            printf("This is a armstrom  number %d\n", num1);
        }
        else
            printf("not a not a armtrom number %d\n", num1);

        printf("CAN you again execute code so press 0 for no and 1 for yes : ");
        scanf("%d", &ch);
    } while (ch == 1);
}