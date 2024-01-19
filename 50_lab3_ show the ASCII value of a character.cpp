#include <stdio.h>

int main() {
    // Declare a variable to store the character
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Display the ASCII value of the character
    printf("ASCII value of '%c' is: %d\n", ch, (int)ch);

    return 0;
}

