// Object: Write a porgram in c to input house colour code of a student using else- condition
// DATE: 18|10|2024

#include <stdio.h>
void main()
{
    char hc; // hc stand for house colour :
    // first we need to display a small menu baar lets creat
    printf("\t\t\t\t\t\t\t\t Menu \n");
    printf("Enter R for red house : \n");
    printf("Enter G for green house : \n");
    printf("Enter B for blue house : \n");
    printf("Enter Y for yello house : \n");
    scanf("%c", &hc);
    // Check by else if condition:
    if (hc == 'G' || hc == 'g')
        printf("Congratulation you select greenHouse :");
    else if (hc == 'R' || hc == 'r')
        printf("Congularation you select redHouse :");
    else if (hc == 'B' || hc == 'b')
        printf("Congularation you select blueHouse :");
    else if (hc == 'Y' || hc == 'y')
        printf("Congularation you select yelloHouse: ");
    else
        printf("Invalid house colour:");
        

}