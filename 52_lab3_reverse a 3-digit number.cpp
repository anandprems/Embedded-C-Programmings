#include <stdio.h>

int main() {
    // Declare a variable to store the 3-digit number
    int number;

    // Prompt the user to enter a 3-digit number
    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    // Check if the entered number is a 3-digit number
    if (number < 100 || number > 999) {
        printf("Please enter a valid 3-digit number.\n");
        return 1; // Exit with an error code
    }

    // Calculate and display the reversed number
    int reversedNumber = 0;

    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}

