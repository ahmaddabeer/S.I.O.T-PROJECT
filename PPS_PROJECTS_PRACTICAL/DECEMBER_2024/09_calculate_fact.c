// Object: Write a program in c to print factorial.
#include <stdio.h>
void main()
{
    int fact = 1, i, n;
    printf("Enter number to calculate factorial \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d", fact);
}