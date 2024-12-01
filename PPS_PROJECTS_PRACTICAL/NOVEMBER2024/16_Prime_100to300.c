#include <stdio.h>
int main() {
    printf("Prime numbers between 100 and 300 are:\n");

    for (int i = 100; i <= 300; i++) {
        int isPrime = 1; // Assume the number is prime
        for (int j = 2; j < i; j++) { // Check divisors from 2 to i-1
            if (i % j == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i); // Print if prime
        }
    }

    return 0;
}
