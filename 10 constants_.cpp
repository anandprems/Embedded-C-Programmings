#include <stdio.h>

// Symbolic Constants
#define PI 3.14159
#define MAX_SIZE 100

// Enumeration Constants
enum Weekdays {MON, TUE, WED, THU, FRI, SAT, SUN};

int main() {
    // Integer Constants
    int integerConstant = 10;
    printf("Integer Constant: %d\n", integerConstant);

    // Floating-point Constants
    float floatConstant = 3.14;
    printf("Floating-point Constant: %f\n", floatConstant);

    // Character Constants
    char charConstant = 'A';
    printf("Character Constant: %c\n", charConstant);

    // String Constants
    char stringConstant[] = "Hello, World!";
    printf("String Constant: %s\n", stringConstant);

    // Symbolic Constants
    printf("Symbolic Constant (PI): %f\n", PI);
    printf("Symbolic Constant (MAX_SIZE): %d\n", MAX_SIZE);

    // Enumeration Constants
    enum Weekdays today = WED;
    printf("Today is Wednesday (enum value: %d)\n", today);

    return 0;
}

