// Object: Write a program to print given pattern
/*
    *
   **
  ***
 ****
*****

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
            printf("*");
        }
        printf("\n");
    }
}