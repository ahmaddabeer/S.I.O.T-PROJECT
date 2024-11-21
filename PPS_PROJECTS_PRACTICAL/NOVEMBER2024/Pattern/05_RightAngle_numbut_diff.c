// Object: Write a program in c to print given patter
/*
1
22
333
4444
55555
*/
#include <stdio.h>
void main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}