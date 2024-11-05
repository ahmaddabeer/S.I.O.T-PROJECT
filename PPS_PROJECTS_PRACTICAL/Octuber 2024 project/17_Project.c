// Object: Write a program in c to print a number 1 to 20 use goto statement
// DATE:23|10|2024
#include <stdio.h>
void main()
{

    int i = 1;
start:
    printf("%3d \n", i);
    i++;
    if (i <= 20)
        goto start;
}