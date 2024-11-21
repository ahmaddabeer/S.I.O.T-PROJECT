//Object: Write a program in c to print given pattern 

/*
A
AB
ABC
ABCD
ABCDE
*/
#include <stdio.h>
void main(){

    
       for(int i = 65; i<=69; i++){
        for(int j=i; j<=i; j++){
            printf("%c", j);
        }
        printf("\n");
       }
        

    
}