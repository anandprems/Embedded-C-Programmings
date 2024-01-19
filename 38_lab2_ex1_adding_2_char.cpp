#include <stdio.h>

int main() {
    // Declare variables to store two char values
    char char1, char2;

    // Prompt the user to enter the first char
    printf("Enter the first char: ");
    scanf(" %c", &char1);  // Note the space before %c to consume any leading whitespace

    // Prompt the user to enter the second char
    printf("Enter the second char: ");
    scanf(" %c", &char2);

    // Calculate the sum of the two chars
    int sum = char1 + char2;

    // Display the result
    printf("Sum of '%c' and '%c' is: %d\n", char1, char2, sum);
    
    return 0;
}

