// Object: Write a program in c to create 3*3 matrix incert in 9 element's in the matrix and print the sum of  matrix with its horizontal sum.
#include <stdio.h>
int main()
{

    int mat[3][3], i, j, sum = 0;
    printf("Enter 9 element of a matrix :");

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {

            scanf("%d", &mat[i][j]);
            sum = sum + mat[i][j];
        }
    }
    // output

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {

            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("%d", sum);
}