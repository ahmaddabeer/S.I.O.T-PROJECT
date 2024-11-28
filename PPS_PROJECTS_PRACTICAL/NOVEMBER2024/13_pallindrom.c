//Object: Write a program in c to calculate the given number is palindrom or not 
#include <stdio.h>
void main(){
    int pal=0 , n, a;
    do
    {
        printf("Enter a number to check the given number is pallindrom or not \n ");
    scanf("%d", &n);
    int n1 = n;

    while(n !=0){
        a = n%10;
        pal = pal*10+a;
        n = n/10;

    }
    if(n1 == pal){
        printf("The given number is pallindrom %d\n\n ", n1);
    }
    else
    printf("The given number is not a pallindrom %d\n\n", n1);
    printf("Enter 1 for again check the number and no for 0\n");
    scanf("%d", &a);
    } while (a == 1);
    
}