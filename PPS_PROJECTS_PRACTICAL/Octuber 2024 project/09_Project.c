// Qustion: Using conditional operator(Ternary operater) calculate a person is eligible for voting or not
 // 

#include <stdio.h>
void main()
{

    int age; // Declair variable
    printf("Enter your age :");
    scanf("%d", &age);
    // Syntax: (ternary or conditional operater) = ?: = (condition)? <true>:<false>;

    (age >= 18) ? printf("Eligible for voting ") : printf(" not eligible for voting ");
}