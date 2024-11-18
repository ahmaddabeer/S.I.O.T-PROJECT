/*Object: Write a program in c to print Pyramind Pattern (Right Angle Triangle patter )
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
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf(" \n");
    }
}