// Object : Write a program in c to calculate table 2  to 20 using loop
#include <stdio.h>
void main()
{

    int table = 0;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 20; j++)
        {

            table = i * j;
            printf("%4d", table);
            // printf("\n");
        }
        printf("\n");
    }
}