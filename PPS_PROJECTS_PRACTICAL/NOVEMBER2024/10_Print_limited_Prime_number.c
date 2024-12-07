// Object: Write a program in c to  print the sum of prime number up to given limit.
#include <stdio.h>
int main()
{

    int j, isPrime, num;

    printf("Prime number 100 to 500 \n");

    for (num= 100; num <= 500; num++)
    {
        isPrime = 1;

        for (j = 2; j < num; j++)
        {

            if (num % j == 0)
            {

                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d | ", num);
        }
    }
    printf("\n");
    return 0;
}
