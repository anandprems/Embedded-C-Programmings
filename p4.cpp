#include <stdio.h>

void swap(int a, int b);

int main() {
    int x = 5, y = 10;

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Call the swap function
    swap(x, y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

// Function to swap two variables using call by value
void swap(int a, int b) {
    int temp;

    temp = a; 
    a = b;    
    b = temp;
}

