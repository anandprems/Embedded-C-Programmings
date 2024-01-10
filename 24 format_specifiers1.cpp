#include <stdio.h>

int main() {
    int integerNumber = 42;
    long longNumber = 123456789012345;
    float floatNumber = 3.14;
    double doubleNumber = 2.71828;
    char character = 'A';
    char string[] = "Hello, C!";

    printf("Integer: %d\n", integerNumber);
    printf("Long: %ld\n", longNumber);
    printf("Float: %.2f\n", floatNumber);
    printf("Double: %.5lf\n", doubleNumber);
    printf("Character: %c\n", character);
    printf("String: %s\n", string);

    // Taking characters as input and printing their ASCII values
    char inputChar;
    printf("Enter a character: ");
    scanf(" %c", &inputChar); // Note the space before %c to consume any leading whitespace
    printf("ASCII value of '%c': %d\n", inputChar, inputChar);

    return 0;
}

