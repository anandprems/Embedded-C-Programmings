#include <stdio.h>

int main() {
    int integerNumber;
    float floatNumber;
    char character;
    char string[50];

    // Taking an integer as input
    printf("Enter an integer: ");
    scanf("%d", &integerNumber);

    // Taking a float as input
    printf("Enter a float: ");
    scanf("%f", &floatNumber);

    // Taking a character as input
    printf("Enter a character: ");
    scanf(" %c", &character);  // Note the space before %c to consume any leading whitespace

    // Taking a string as input
    printf("Enter a string: ");
    scanf("%s", string);

    // Printing the values entered
    printf("You entered: \n");
    printf("Integer: %d\n", integerNumber);
    printf("Float: %.2f\n", floatNumber);
    printf("Character: %c\n", character);
    printf("String: %s\n", string);

    return 0;
}

