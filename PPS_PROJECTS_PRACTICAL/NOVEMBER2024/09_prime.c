// OBJECT: Write a program in c to check given number is prime or not .
//  DATE:
#include <stdio.h>
int main()
{
    int n, isPrime;
    printf("Enter a number to check given numbre is prime or not :\n");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("%d The given number is not prome \n", n);
        return 0;
    }

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (  = 0)
    {
        printf("%d this is a prime number :", n);
    }
    else
        printf("%d this is not a prime number: ", n);
}