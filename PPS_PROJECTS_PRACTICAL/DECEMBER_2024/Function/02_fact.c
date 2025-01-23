// Object:  W a program in c to using function calculate factoral of give number.

#include <stdio.h>

int fact(int factorial);

int main()
{

   int i, fact = 4;

   for (i = 1; i <= fact; i++)
   {

      fact = fact * i;
   }
   printf("factorial is = %d ", fact);
}
