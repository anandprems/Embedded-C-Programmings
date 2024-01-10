#include <stdio.h>

int main() {
    int num1 = 5;
    int num2 = 10;

    // Increment operator
    num1++;  // num1 is now 6

    // Decrement operator
    num2--;  // num2 is now 9

    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    // Using increment and decrement operators in expressions
    int result1 = num1++ + num2;  // result1 is (6 + 9), num1 becomes 7 after this
    int result2 = --num2 + num1;  // result2 is (8 + 7), num2 becomes 8 after this

    printf("result1: %d\n", result1);
    printf("result2: %d\n", result2);
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    return 0;
}

