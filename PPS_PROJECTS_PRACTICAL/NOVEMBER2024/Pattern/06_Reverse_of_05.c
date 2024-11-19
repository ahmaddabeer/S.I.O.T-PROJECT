// Object: Write a program in c print given patter
/*
55555
4444
333
22
1
*/
#include <stdio.h>
void main()
{

    // is code ma bhi ham parent loop ko pahle hi ulta chala lagay
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}