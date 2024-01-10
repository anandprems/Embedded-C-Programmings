#include <stdio.h>

// Define a user-defined type alias for an array of integers
typedef int IntArray[5];

// Define a user-defined type alias for a structure
typedef struct {
    int x;
    int y;
} Point;

// Define a user-defined type alias for a union
typedef union {
    int i;
    float f;
    char c;
} DataUnion;

int main() {
    // Use the user-defined types
    IntArray myArray = {1, 2, 3, 4, 5};

    Point point;
    point.x = 10;
    point.y = 20;

    DataUnion data;
    data.i = 42;

    // Display values
    printf("Array: %d\n", myArray[0]);
    printf("Structure: %d, %d\n", point.x, point.y);
    printf("Union: %d\n", data.i);

    return 0;
}

