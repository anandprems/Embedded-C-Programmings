#include <stdio.h>

int main() {
    unsigned int a = 0x0A;  // Binary: 1010
    unsigned int b = 0x05;  // Binary: 0101

    // Bitwise AND
    unsigned int result_and = a & b;  // Binary: 0000 (0)
    printf("Bitwise AND: %x\n", result_and);

    // Bitwise OR
    unsigned int result_or = a | b;   // Binary: 1111 (15)
    printf("Bitwise OR: %x\n", result_or);

    // Bitwise XOR
    unsigned int result_xor = a ^ b;  // Binary: 1111 (15)
    printf("Bitwise XOR: %x\n", result_xor);

    // Bitwise NOT
    unsigned int result_not = ~a;     // Binary: 11110101 (in two's complement form)
    printf("Bitwise NOT: %x\n", result_not);

    // Left Shift
    unsigned int result_left_shift = a << 2;  // Binary: 101000 (40)
    printf("Left Shift: %x\n", result_left_shift);

    // Right Shift
    unsigned int result_right_shift = a >> 2;  // Binary: 10 (2)
    printf("Right Shift: %x\n", result_right_shift);

    return 0;
}

