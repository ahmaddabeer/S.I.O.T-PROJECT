// Object: Write a C program to perform Addition, Subtraction, Multiplication, and Division using functions. Take two integers as input and display the results 

#include <stdio.h>

// Function prototypes
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
float div(int x, int y);

int main() {
    int a, b, sum, difference, product;
    float quotient;

    // Input
    printf("Enter any two numbers: ");
    scanf("%d%d", &a, &b);

    // Function calls
    sum = add(a, b);
    difference = sub(a, b);
    product = mul(a, b);
    if (b != 0) {
        quotient = div(a, b);
    } else {
        printf("Division by zero is not allowed.\n");
        quotient = 0; // Optional default value
    }

    // Output results
    printf("Addition: %d\n", sum);
    printf("Subtraction: %d\n", difference);
    printf("Multiplication: %d\n", product);
    if (b != 0) {
        printf("Division: %.2f\n", quotient);
    }

    return 0;
}

// Addition function
int add(int x, int y) {
    return x + y;
}

// Subtraction function
int sub(int x, int y) {
    return x - y;
}

// Multiplication function
int mul(int x, int y) {
    return x * y;
}

// Division function
float div(int x, int y) {
    return (float)x / y; // Typecast to get float result
}
