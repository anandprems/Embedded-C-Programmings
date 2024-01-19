#include <stdio.h>

int main() {
    // Declare a variable to store the character
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Display the ASCII value in decimal, octal, and hexadecimal formats
    printf("ASCII value of '%c' in decimal: %d\n", ch, (int)ch);
    printf("ASCII value of '%c' in octal: %o\n", ch, (int)ch);
    printf("ASCII value of '%c' in hexadecimal: %x\n", ch, (int)ch);

    return 0;
}

