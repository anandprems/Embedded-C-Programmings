#include <stdio.h>

int main() {
    int a = 5, b = 10;

    // Logical AND
    if (a > 0 && b > 0) {
        printf("Both a and b are positive\n");
    }

    // Logical OR
    if (a > 0 || b > 0) {
        printf("At least one of a or b is positive\n");
    }

    // Logical NOT
    if (!(a == b)) {
        printf("a is not equal to b\n");
    }

    return 0;
}

