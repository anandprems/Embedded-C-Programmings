#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables to store principal amount, rate of interest, time (in years), and number of times interest is compounded per year
    float principal, rate, time;
    int n;

    // Prompt the user to enter principal amount
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    // Prompt the user to enter the rate of interest
    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    // Prompt the user to enter the time (in years)
    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Prompt the user to enter the number of times interest is compounded per year
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Calculate compound interest
    float compoundInterest = principal * pow(1 + (rate / (n * 100)), n * time) - principal;

    // Display the result
    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}

