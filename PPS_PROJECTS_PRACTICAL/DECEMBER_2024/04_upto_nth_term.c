//Object: Write a program in c to calculate sum of nth term. s=1^2+2^2+3^2......upto (n)th term.
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Ask the user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Calculate the sum of squares
    for (i = 1; i <= n; i++) {
        sum = sum + (i * i);
    }

    // Print the result
    printf("Sum of squares: %d\n", sum);

    return 0;
}
