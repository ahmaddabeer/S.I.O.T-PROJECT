// Question: Write a simple C program to multiply four 2x2 matrices step by step.

#include <stdio.h>

int main()
{
    int matrix1[2][2], matrix2[2][2], matrix3[2][2], matrix4[2][2];
    int temp[2][2], result[2][2];

    // Input Matrix 1
    printf("Enter 4 elements for Matrix 1 (2x2):\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input Matrix 2
    printf("Enter 4 elements for Matrix 2 (2x2):\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Multiply Matrix 1 and Matrix 2 -> Store in temp
    printf("\nMultiplying Matrix 1 and Matrix 2...\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            temp[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                temp[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Input Matrix 3
    printf("Enter 4 elements for Matrix 3 (2x2):\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrix3[i][j]);
        }
    }

    // Multiply temp and Matrix 3 -> Store in result
    printf("\nMultiplying the result with Matrix 3...\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                result[i][j] += temp[i][k] * matrix3[k][j];
            }
        }
    }

    // Input Matrix 4
    printf("Enter 4 elements for Matrix 4 (2x2):\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrix4[i][j]);
        }
    }

    // Multiply result and Matrix 4 -> Final result
    printf("\nMultiplying the result with Matrix 4...\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            temp[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                temp[i][j] += result[i][k] * matrix4[k][j];
            }
        }
    }

    // Display the final result
    printf("\nFinal Result (Matrix Multiplication of all 4 matrices):\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", temp[i][j]);
        }
        printf("\n");
    }

    return 0;
}
