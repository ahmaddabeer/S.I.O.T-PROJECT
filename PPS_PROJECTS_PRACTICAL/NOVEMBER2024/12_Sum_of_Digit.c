// Object: Write a program in c to calculate sum of digit.
#include <stdio.h>
int main()
{
    int sum = 0, n, a;
    printf("Enter a number to calculate the sum of digits \n");
    scanf("%d", &n);

    while (n != 0)
    {

        a = n % 10;
        sum = sum * 10 + a;
        n = n / 10;
    }
    printf("Sum of digit is : %d", sum);
}