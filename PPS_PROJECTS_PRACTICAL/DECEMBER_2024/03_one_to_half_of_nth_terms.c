// Object: Write a program in c to print sum of 1 to 1/2+1/3+1/4 ...... upto n terms.
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0; // Sum variable to store the result

    // Taking input from the user
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Calculating the sum of the series
    for (i = 1; i <= n; i++) {
        sum = sum + (1.0 / i); // Adding each term to the sum
    }

    // Displaying the result
    printf("The sum of the series is: %.2f\n", sum);

    return 0;
}