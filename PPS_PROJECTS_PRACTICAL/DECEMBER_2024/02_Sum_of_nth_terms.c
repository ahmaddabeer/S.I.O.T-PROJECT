// Object: Write a program in c to print sum of nth term
#include <stdio.h>
void main()
{

    int n, sum = 0;

    printf("Enter the last term of number to sum of all \n"); // take user input

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) // loop upto n the term
    {
        sum = sum + i; // add and store in sum
    }
    printf("Sum of series upto nth terms = %d ", sum); // print sum
}