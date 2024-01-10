#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 5;

    num1 += num2;  // num1 is now 15 (10 + 5)
    printf("num1: %d\n", num1);

    num1 *= 2;     // num1 is now 30 (15 * 2)
    printf("num1: %d\n", num1);

    num1 -= 8;     // num1 is now 22 (30 - 8)
    printf("num1: %d\n", num1);

    num1 /= 2;     // num1 is now 11 (22 / 2)
    printf("num1: %d\n", num1);

    num1 %= 3;     // num1 is now 2 (11 % 3)
    printf("num1: %d\n", num1);

    return 0;
}

