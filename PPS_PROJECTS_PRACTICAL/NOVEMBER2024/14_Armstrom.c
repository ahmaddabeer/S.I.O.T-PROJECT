
#include <stdio.h>

void main() {
    int arm, n, s, choice;

    do {
        arm = 0; // Reset arm for each iteration
        printf("Enter a number to check if it is an Armstrong number or not:\n");
        scanf("%d", &n);
        int n1 = n; // Store the original number

        // Calculate the Armstrong value
        while (n != 0) {
            s = n % 10;
            arm = arm + (s * s * s); // Sum of cubes of digits
            n = n / 10;
        }

        // Check if the number is an Armstrong number
        if (n1 == arm) {
            printf("The given number %d is an Armstrong number.\n", n1);
        } else {
            printf("The given number %d is not an Armstrong number.\n", n1);
        }

        // Ask user if they want to check another number
        printf("Do you want to check another number? (Enter 1 for Yes, 0 for No):\n");
        scanf("%d", &choice);

    } while (choice == 1);
}
