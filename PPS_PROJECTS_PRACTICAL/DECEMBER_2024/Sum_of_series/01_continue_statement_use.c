// To practical continue statement.
#include <stdio.h>
void main()
{

    for (int i = 1; i <= 10; i++)
    {

        if (i == 3)
            continue;
        printf("%3d", i);
    }
}