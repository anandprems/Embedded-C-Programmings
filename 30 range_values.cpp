#include <stdio.h>
#include <limits.h>

int main() {
    printf("Range of short int: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Range of int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Range of long int: %ld to %ld\n", LONG_MIN, LONG_MAX);

    return 0;
}

