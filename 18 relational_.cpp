#include <stdio.h>

int main() {
    int a = 5, b = 10;

    if (a == b) {
        printf("a is equal to b\n");
    } else {
        printf("a is not equal to b\n");
    }

    if (a < b) {
        printf("a is less than b\n");
    }

    if (a <= b) {
        printf("a is less than or equal to b\n");
    }

    if (a != b) {
        printf("a is not equal to b\n");
    }

    if (a > b) {
        printf("a is greater than b\n");
    }

    if (a >= b) {
        printf("a is greater than or equal to b\n");
    }

    return 0;
}

