#include <stdio.h>

int main() {
    // Declare variables to store three numbers
    float num1, num2, num3;

    // Prompt the user to enter the three numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the third number: ");
    scanf("%f", &num3);

    // Calculate the average
    float average = (num1 + num2 + num3) / 3;

    // Display the result
    printf("Average of %.2f, %.2f, and %.2f is: %.2f\n", num1, num2, num3, average);

    return 0;
}

