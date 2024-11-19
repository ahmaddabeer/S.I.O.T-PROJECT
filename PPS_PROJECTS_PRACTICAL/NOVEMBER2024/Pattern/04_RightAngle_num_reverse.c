// Object: Write a program in c  to print given  pattern:
/*
12345
1234
123
12
1
*/
#include <stdio.h>
void main()
{

    // isme ham ak kaam kar leate  ha ki parent loop ko hi ham ulta chalate ha kuu ki parent loop ko chai ulta chlai ya fir sidha chalna 5 time ha to ham ulta chalay gay
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    
}