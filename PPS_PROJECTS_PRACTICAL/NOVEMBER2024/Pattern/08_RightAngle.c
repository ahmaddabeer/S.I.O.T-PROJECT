// Object: Write a program to print given patter
/*
a
ab
abc
abcd
abcde
*/

#include <stdio.h>
int main()
{

    for (char i = 97; i <= 102; i++)
    {

        for (int j = 97; j <= i; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
}