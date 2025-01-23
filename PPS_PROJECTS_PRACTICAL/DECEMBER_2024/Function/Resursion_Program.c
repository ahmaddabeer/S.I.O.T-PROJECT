// using resurtion hwo to calculate sum of n natural number this code is clear the concept of resurtion.

#include <stdio.h>
int sum(int);
void main()
{

    int k;
    k = sum(3);
    printf("%d", k);
}

int sum(int a)
{

    int s;
    if (a == 1)
        return a;

    s = a + sum(a - 1);
    return s;
}
