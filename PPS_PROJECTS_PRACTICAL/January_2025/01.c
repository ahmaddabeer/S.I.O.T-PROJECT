// object:what is out put of this code.

#include <stdio.h>
void main()
{

    int a, b, *c;
    // take by user a and b
    printf("Enter any two number: ");
    scanf("%d %d", &a, &b);
    c = &a;
    printf("%d  %d  %u %d ", a, b, c, *c);
}