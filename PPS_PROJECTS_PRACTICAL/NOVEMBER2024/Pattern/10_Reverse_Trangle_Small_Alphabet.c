/*Object : Write a program in c to print given patter.
abcdef
abcde
abc
ab
a

*/
#include <stdio.h>
void main()
{

    for (int i = 102; i >= 97; i--)
    {
        for (int j = 97; j <= i; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
}