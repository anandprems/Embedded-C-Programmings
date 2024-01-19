#include <stdio.h>

int main() {
    // Declare variables to store principal amount, rate of interest, and time (in years)
    float principal, rate, time;

    // Prompt the user to enter principal amount
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    // Prompt the user to enter the rate of interest
    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    // Prompt the user to enter the time (in years)
    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    float simpleInterest = (principal * rate * time) / 100;

    // Display the result
    printf("Simple Interest: %.2f\n", simpleInterest);

    return 0;
}

