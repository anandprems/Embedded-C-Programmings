#include <stdio.h>

// Define an enumeration named Color
enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    // ... additional colors
};

int main() {
    // Declare variables of the enum type
    enum Color myColor1 = RED;
    enum Color myColor2 = BLUE;

    // Use the enum values
    printf("My Color 1: %d\n", myColor1);
    printf("My Color 2: %d\n", myColor2);

    return 0;
}

