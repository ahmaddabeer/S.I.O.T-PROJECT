/*Object : Write a program in c to print given patter.
A
AB
ABC
ABCD
ABCDE

*/
#include <stdio.h>
void main()
{

    for (int i = 69; i >= 65; i--)
    {
        for (int j = 65; j <= i; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
}