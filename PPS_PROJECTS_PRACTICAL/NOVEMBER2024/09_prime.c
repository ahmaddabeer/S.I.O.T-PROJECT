// Object:Write a program in c to check the given number is prime or not.
#include <stdio.h>
int main()
{

    int num, isPrime = 1, i, cond;
    do
    {
        printf("\nEnter a number to check the given number is prime or not");
        scanf("%d", &num);
        // first we check the given number is <= 1 so direct print this is not a prime.

        if (num <= 1)
        {
            printf("%d This number is not a prime :\n", num);
            return 0;
        }

        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            printf("%d Yes Prime \n", num);
        }
        else
            printf("%d NOT a prime\n ", num);
        printf("Do you want to again run code press 1 for yes and no for 0");
        scanf("%d", &cond);
    } while (cond == 1);

    return 0;
}