#include <stdio.h>

int main() {
    // Declare variables to store two numbers
    int num1, num2;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display the numbers before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swap the numbers using a temporary variable
    int temp = num1;
    num1 = num2;
    num2 = temp;

    // Display the numbers after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

