// Question: Write a simple C program to multiply four 3x3 matrices.

#include <stdio.h>

int main()
{
    int matrix1[3][3], matrix2[3][3], matrix3[3][3], matrix4[3][3];
    int temp1[3][3], temp2[3][3], result[3][3];

    // Input Matrix 1
    printf("Enter 9 elements for Matrix 1 (3x3):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input Matrix 2
    printf("Enter 9 elements for Matrix 2 (3x3):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Multiply Matrix 1 and Matrix 2 -> Store in temp1
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp1[i][j] = 0; // Initialize temp1
            for (int k = 0; k < 3; k++)
            {
                temp1[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Input Matrix 3
    printf("Enter 9 elements for Matrix 3 (3x3):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix3[i][j]);
        }
    }

    // Multiply temp1 and Matrix 3 -> Store in temp2
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp2[i][j] = 0; // Initialize temp2
            for (int k = 0; k < 3; k++)
            {
                temp2[i][j] += temp1[i][k] * matrix3[k][j];
            }
        }
    }

    // Input Matrix 4
    printf("Enter 9 elements for Matrix 4 (3x3):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix4[i][j]);
        }
    }

    // Multiply temp2 and Matrix 4 -> Store in result
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = 0; // Initialize result
            for (int k = 0; k < 3; k++)
            {
                result[i][j] += temp2[i][k] * matrix4[k][j];
            }
        }
    }

    // Display the final result
    printf("\nFinal Result (Multiplication of all 4 matrices):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
