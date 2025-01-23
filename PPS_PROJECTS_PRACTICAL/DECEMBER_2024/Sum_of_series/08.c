//Object: Write a prgram in c to calculate and print sum of series s = 1/1+1/2+1/3....upto  (n)th term .
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0; // Use float to handle fractions

    // Ask the user for input
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Loop through each term
    for (i = 1; i <= n; i++) {
        sum = sum + (1.0 / i); // Add 1/i to the sum
    }

    // Display the result
    printf("The sum of the series is: %.2f\n", sum);

    return 0;
}
