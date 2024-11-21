// Object: Write a program in c to print fibonachi series .
// DATE:06|11|2024
#include <stdio.h>
void fibonachi(int n)
{
    int a = 0, b = 1, next;
    for (int i = 0; i <= n; i++)
    {
        printf("%d", a);
        next = a + b;
        a = b;
        b = next;
    }
}

int main()
{
    int n;
    printf("Enter the last number and print the fibonachi nuber in between:\n");
    scanf("%d", &n);
    fibonachi(n);
    return 0;


}// not clear logic  try again 

 