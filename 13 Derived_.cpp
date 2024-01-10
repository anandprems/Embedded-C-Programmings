#include <stdio.h>

// Array
int myArray[5];

// Structure
struct Point {
    int x;
    int y;
};

// Union
union Data {
    int i;
    float f;
    char c;
};

int main() {
    // Pointers
    int x = 10;
    int *ptr = &x;

    // Accessing and using the derived data types
    myArray[0] = 1;

    struct Point point;
    point.x = 2;
    point.y = 3;

    union Data data;
    data.i = 4;

    printf("Array: %d\n", myArray[0]);
    printf("Structure: %d, %d\n", point.x, point.y);
    printf("Union: %d\n", data.i);
    printf("Pointer: %d\n", *ptr);

    return 0;
}

