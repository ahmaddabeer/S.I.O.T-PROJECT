// Object: Write a porgram in c to print grater number among them
//   DATE: 15|10|2024
#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter any two number to check greater number among them : ");
    scanf("%d%d", &a, &b);
    // Using conditional statement :
    // syntax of conditinal statemet is <condition>? <true statement>:<false statment>;
    (a > b) ? printf("a is grater number among them :") : printf("b is greater number among them \n");
    printf("Thank you");
}