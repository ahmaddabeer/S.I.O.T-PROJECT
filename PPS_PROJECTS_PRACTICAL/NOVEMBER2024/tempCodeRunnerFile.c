
#include <stdio.h>

int main() {
    int num, i, isPrime;

    printf("Prime numbers between 100 and 500 are:\n");

    for (num = 100; num <= 500; num++) {
        isPrime = 1; // Assume the number is prime

        for (i = 2; i < num; i++) { // Check divisibility from 2 to num-1
            if (num % i == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num); // Print the prime number
        }
    }

    printf("\n");
    return 0;
}

