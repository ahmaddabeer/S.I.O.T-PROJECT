// Question: Write a simple C program to input and display three matrices.

#include <stdio.h>

int main()
{
    int matrix1[2][2], matrix2[2][2], matrix3[2][2];

    // Input for Matrix 1
    printf("Enter 4 elements for Matrix 1 (2x2):\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for Matrix 2
    printf("Enter 4 elements for Matrix 2 (2x2):\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Input for Matrix 3
    printf("Enter 4 elements for Matrix 3 (2x2):\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrix3[i][j]);
        }
    }

    // Display Matrix 1
    printf("\nMatrix 1:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    // Display Matrix 2
    printf("\nMatrix 2:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    // Display Matrix 3
    printf("\nMatrix 3:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
