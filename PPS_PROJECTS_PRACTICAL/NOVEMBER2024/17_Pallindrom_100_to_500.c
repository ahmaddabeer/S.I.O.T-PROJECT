//Object: Write a program in c to print 100 to 500 pallindrom number.
#include <stdio.h>

int main() {
    int num, reversedNum, remainder, originalNum;

    printf("Palindrome numbers between 100 and 500 are:\n");

    for (num = 100; num <= 500; num++) {
        originalNum = num;
        reversedNum = 0;

        // Reverse the number
        while (num != 0) {
            remainder = num % 10;
            reversedNum = reversedNum * 10 + remainder;
            num /= 10;
        }

        // Check if the original number is equal to its reverse
        if (originalNum == reversedNum) {
            printf("%d ", originalNum);
        }

        num = originalNum;  // Reset num to the original number
    }

    return 0;
}
