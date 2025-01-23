//Object: Write a program in c to print sum of series . s= 1^1+3^2+5^3....upto (n)th terms.
#include <stdio.h>

int main() {
    int n, i, j, odd = 1;
    long long term, sum = 0;

    // Ask the user for input
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Loop through each term
    for (i = 1; i <= n; i++) {
        term = 1; // Reset term to 1 for each number
        for (j = 1; j <= i; j++) { // Calculate odd^i
            term = term * odd;
        }
        sum = sum + term; // Add the term to the sum
        odd = odd + 2;    // Move to the next odd number
    }

    // Display the result
    printf("The sum of the series is: %lld\n", sum);

    return 0;
}
