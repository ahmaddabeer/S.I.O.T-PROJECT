// object: write a program in c to input two numbe ans swap them using thrid variable.
#include <stdio.h>
void swap(int *, int *);
void main()
{
    int a, b;
    printf("Enter any two number : ");
    scanf("%d%d", &a, &b);

    swap(&a, &b);

    printf("using call by refrence swap using third variable :  %d %3d", a, b);
}

void swap(int *a, int *b)
{

    int tem;

    tem = *a;
    *a = *b;
    *b = tem;
}