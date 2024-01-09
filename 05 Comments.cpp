#include <stdio.h>

int main() {
    // This program adds two numbers and prints the result
    
    // Declare variables to store the numbers
    int num1, num2;
    
    // User to enter the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    // User to enter the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Calculate the sum of the two numbers
    int sum = num1 + num2;
    
    /*
       Print the result
       The result is calculated by adding num1 and num2
    */
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    
    return 0;
}

