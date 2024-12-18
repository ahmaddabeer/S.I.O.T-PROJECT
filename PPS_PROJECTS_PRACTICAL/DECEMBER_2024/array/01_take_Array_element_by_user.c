// Object: W.A.P. in c to create an array of 5 integer number witch is interd by user.

#include <stdio.h>
int main()
{

    int a[5], i, j;

    printf("Enter a 5 elemt of the array\n");
    for (i = 0; i < 5; i++)
    {

        scanf("%d", &a[i]);
    }

    for (j = 0; j < 5; j++)
    {

        printf("%d ", a[j]);
    }
}