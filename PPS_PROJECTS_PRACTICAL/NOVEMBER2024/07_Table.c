//OBJECT: Write a program in c to input any number form ther user and print the multiplication table for the number.
//DATE: --
#include <stdio.h>
void main(){
    int num,table=0;
    printf("Enter any number to :\n");
    scanf("%d", &num);
    printf("Table of  %d  is :  \n", num);
    //Calculation lets use for loop try it.
    for(int i = 1; i<=10; i++){
        table = num*i;
        printf("%d\n", table);
    }

}