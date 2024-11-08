// Object: Write a program in c to print 0 to 100 first print even an then odd numbers . usign loop
// DATE:06|11|2024
#include <stdio.h>
void main()
{
    printf("Even number 0 to 100\n");
    for (int ev = 0; ev <= 100; ev++)
    {
        if (ev % 2 == 0)
        {
            printf("%d\t", ev);
        }
    }
    printf("\n\n");
    printf("Odd number 0 to 100\n");
    for (int odd = 0; odd <= 100; odd++)
    {
        if (odd % 2 != 0)
        {
            printf("%d\t", odd);
        }
    }
}