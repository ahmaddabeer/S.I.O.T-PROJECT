//Object: Write a program in c to print sum of s = 1^1+2^2+3^3+4^4.....upto (n)th term.
#include <stdio.h>

int main() {
    int n, i, j;
    long long sum = 0, term;

    // Ask the user for input
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Loop through each term
    for (i = 1; i <= n; i++) {
        term = 1; // Reset term to 1 for each number
        for (j = 1; j <= i; j++) { // Multiply i by itself i times
            term = term * i;
        }
        sum = sum + term; // Add the term to the sum
    }

    // Display the result
    printf("The sum is: %lld\n", sum);

    return 0;
}
