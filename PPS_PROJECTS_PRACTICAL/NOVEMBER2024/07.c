// write a program in c to print table and the number is taken by the  uer

#include <stdio.h>
void main()
{
    int table,i = 1, num ;
    printf("Enter a number to print a table :  ");
    scanf("%d", &num);
    // calculation
    while(i<=10){
        table = num*i;
        printf(" %d\n", table);
        i++;
        


    }
    
}