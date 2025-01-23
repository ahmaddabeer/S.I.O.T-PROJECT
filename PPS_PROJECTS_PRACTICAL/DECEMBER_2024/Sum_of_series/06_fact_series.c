//Object: Write a program in c to calculate sum of factorial series. s= 1!+2!+3!.....upto (n)th term .
#include <stdio.h>

int main() {
    int n, i, j;
    long long sum = 0, factorial;

    // Ask the user for input
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Loop through each term
    for (i = 1; i <= n; i++) {
        factorial = 1; // Initialize factorial for each term
        for (j = 1; j <= i; j++) { // Calculate i!
            factorial = factorial * j;
        }
        sum = sum + factorial; // Add the factorial to the sum
    }

    // Display the result
    printf("The sum of the factorial series is: %lld\n", sum);

    return 0;
}
