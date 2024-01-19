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

    // Calculate the sum of the digits
    int sum = 0;

    while (number != 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    // Display the result
    printf("Sum of the digits: %d\n", sum);

    return 0;
}

