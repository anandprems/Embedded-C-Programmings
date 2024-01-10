#include <stdio.h>

int main() {
    // Variables
    int a = 5, b = 2, c = 8;
    int result;

    // Arithmetic operations
    result = a + b * c;
    printf("Result after arithmetic operations: %d\n", result);

    // Increment and decrement
    result++;
    printf("Result after increment: %d\n", result);

    result--;
    printf("Result after decrement: %d\n", result);

    // Bitwise operations
    result = a & b | c;
    printf("Result after bitwise operations: %d\n", result);

    // Relational and logical operations
    int condition1 = (a > b) && (c != 0);
    int condition2 = (a <= b) || (c == 8);
    printf("Result of logical operations: %d, %d\n", condition1, condition2);

    // Conditional operator
    int max = (a > b) ? a : b;
    printf("Maximum between a and b: %d\n", max);

    // Assignment operators
    result += 10;  // Equivalent to result = result + 10;
    printf("Result after addition assignment: %d\n", result);

    result *= 3;   // Equivalent to result = result * 3;
    printf("Result after multiplication assignment: %d\n", result);

    return 0;
}

