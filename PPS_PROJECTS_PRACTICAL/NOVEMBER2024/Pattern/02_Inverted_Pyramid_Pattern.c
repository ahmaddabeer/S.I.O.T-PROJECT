/*Object: Write a program in c to print Reverse Right-Angle Triangle Pattern" ya "Inverted Pyramid Pattern"
******
****
***
**
*

*/
#include <stdio.h>
void main()
{

   for (int i = 1; i <= 5; i++)
   {
      for (int j = 5; j >= i; j--)
      {
         printf("*");
      }
      printf("\n");
   }
}
