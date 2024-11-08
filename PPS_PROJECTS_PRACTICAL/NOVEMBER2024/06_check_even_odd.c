//Object: Write a program in c to print even or odd number value take by user
//DATE:06|11|2024
#include <stdio.h>
void main(){
    int n;
    printf("Enter a number to check given number even or odd : \n :");
    scanf("%d", &n);
    //Check even or odd
    if(n%2 == 0){
        printf("The given number %d is even\n", n);

    }else
    printf("The given number  %d is odd",n);
}