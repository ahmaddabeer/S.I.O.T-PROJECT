// Object: Write a program in c to input two number and swap vitout using third variable.
#include <stdio.h>
void swap(int *, int *);

void main()
{

    int a, b;

    printf("Enter any two number :");
    scanf("%d%d", &a, &b);

    swap(&a, &b);
    printf("Swap viout using third variable : %d  %d ", a, b);
    ;
}

void swap(int *a, int *b)
{

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
