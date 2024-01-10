#include <stdio.h>
// Function definition outside of main
// Void data type (used as the return type for the main function)

void functionName() {
    // Function body
}

int main() {
    // Signed and Unsigned Integer data types
    signed int signedIntegerVar = -25;
    unsigned int unsignedIntegerVar = 50;

    // Float data type
    float floatVar = 3.99;

    // Signed and Unsigned Character data types
    signed char signedCharVar = 'A';
    unsigned char unsignedCharVar = 128;  // Can represent values from 0 to 255

    // Double data type
    double doubleVar = 3.14159;

    // Short and Long Integer data types
    short shortIntegerVar = 32767;  // Typically 16 bits
    long long longIntegerVar = 2147483647;  // Typically 32 bits

    // Printing the values
    printf("Signed Integer Variable: %d\n", signedIntegerVar);
    printf("Unsigned Integer Variable: %u\n", unsignedIntegerVar);
    printf("Float Variable: %f\n", floatVar);
    printf("Signed Character Variable: %c\n", signedCharVar);
    printf("Unsigned Character Variable: %c\n", unsignedCharVar);
    printf("Double Variable: %lf\n", doubleVar);
    printf("Short Integer Variable: %hd\n", shortIntegerVar);
    printf("Long Integer Variable: %ld\n", longIntegerVar);

    // Call the function
    functionName();

    return 0;
}

