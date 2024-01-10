#include <stdio.h>
#include <limits.h>

int main() {
    printf("Signed Char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Signed Short Int: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Signed Int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Signed Long Int: %ld to %ld\n", LONG_MIN, LONG_MAX);

    printf("Unsigned Char: 0 to %u\n", UCHAR_MAX);
    printf("Unsigned Short Int: 0 to %u\n", USHRT_MAX);
    printf("Unsigned Int: 0 to %u\n", UINT_MAX);
    printf("Unsigned Long Int: 0 to %lu\n", ULONG_MAX);

    return 0;
}

