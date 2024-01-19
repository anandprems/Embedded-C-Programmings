#include <stdio.h>

int main() {
    // Declare variables to store three numbers
    int num1, num2, num3;

    // Prompt the user to enter the three numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Find the largest number
    int largest = num1;

    if (num2 > largest) {
        largest = num2;
    }

    if (num3 > largest) {
        largest = num3;
    }

    // Display the result
    printf("The largest number is: %d\n", largest);

    return 0;
}

