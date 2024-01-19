#include <stdio.h>

int main() {
    // Example: Nested loop to print a 3x3 grid of numbers
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    return 0;
}

