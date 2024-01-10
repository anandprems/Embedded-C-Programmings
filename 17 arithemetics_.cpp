#include <stdio.h>

int main() {
    int a = 10, b = 3;
    int sum, difference, product, remainder;
    float quotient;

    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = (float)a / b;  // Using float for accurate division result
    remainder = a % b;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);  // Printing quotient with two decimal places
    printf("Remainder: %d\n", remainder);

    return 0;
}

