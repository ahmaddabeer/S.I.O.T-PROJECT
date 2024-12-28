// Question: Write a C program to input a 3x3 matrix and calculate the sum of its diagonals.

#include <stdio.h>

int main()
{
    int matrix[3][3];
    int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;

    // Input the 3x3 matrix
    printf("Enter 9 elements for a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of the diagonals
    for (int i = 0; i < 3; i++)
    {
        primaryDiagonalSum += matrix[i][i];       // Elements where row == column
        secondaryDiagonalSum += matrix[i][2 - i]; // Elements where row + column = 2
    }

    // Display the original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Display the sums
    printf("\nSum of Primary Diagonal: %d\n", primaryDiagonalSum);
    printf("Sum of Secondary Diagonal: %d\n", secondaryDiagonalSum);

    return 0;
}
