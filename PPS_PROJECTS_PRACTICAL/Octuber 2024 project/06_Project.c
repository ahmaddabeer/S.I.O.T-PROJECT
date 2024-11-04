/*Write a program in c to swap to number each other
1)With using there variable
2)using maths
*/
// DATE: 09|10|2024

// 1) Solution
#include <stdio.h>
void main()
{
    int a, b, c;
    // Take user input
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Before value of: a = %d & b = %d \n ", a, b);
    // Caclulation
    c = a;
    a = b;
    b = c;
    printf("After value of: a = %d & b = %d", a, b);
}