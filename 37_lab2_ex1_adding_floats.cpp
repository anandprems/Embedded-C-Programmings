#include <stdio.h>

int main() {
    // Declare variables to store the two float values
    float num1, num2;

    // Prompt the user to enter the first float
    printf("Enter the first float: ");
    scanf("%f", &num1);

    // Prompt the user to enter the second float
    printf("Enter the second float: ");
    scanf("%f", &num2);

    // Calculate the sum of the two floats
    float sum = num1 + num2;

    // Display the result
    printf("Sum of %.2f and %.2f is: %.2f\n", num1, num2, sum);

    return 0;
}

