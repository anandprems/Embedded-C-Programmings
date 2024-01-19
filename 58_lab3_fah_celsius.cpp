#include <stdio.h>

int main() {
    // Declare variables to store temperatures in Fahrenheit and Celsius
    float fahrenheit, celsius;

    // Prompt the user to enter the temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    // Display the result
    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}

