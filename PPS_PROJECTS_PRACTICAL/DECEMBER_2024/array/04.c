#include <stdio.h>
void main (){

    int mat1[3][3], mat2[3][3], mat3[3][3], i, j;

    printf("Enter the elements of first matrix: \n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the elements of second matrix: \n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    //multiplication of a matrix

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            mat3[i][j] = 0;
            for (int k = 0; k < 3; k++){
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("The resultant matrix is: \n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
}