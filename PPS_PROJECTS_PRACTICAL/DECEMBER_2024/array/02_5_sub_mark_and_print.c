// Object: Write a program in c to input five(5) subject marks and print its summetion.
#include <stdio.h>
void main()
{

    int mark[5], i, j, sum = 0;

    printf("Enter you five subject marks\n");

    for (i = 0; i < 5; i++)
    {

        scanf("%d", &mark[i]);
        sum = sum + mark[i];
    }

    printf("%d", sum);
}