// Object: Write a program in c to print given pattern.
/*

    1
   12
  123
 1234
12345
*/
#include <stdio.h>
void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
}