#include <stdio.h>

int main() {
    // Newline
    printf("Hello\nWorld\n");

    // Tab
    printf("Name\tAge\nJohn\t25\n");

    // Backspace
    printf("AB\bCD\n");

    // Carriage Return
    printf("123\rABCD\n");

    // Backslash
    printf("This is a backslash: \\\n");

    // Double Quote
    printf("This is a double quote: \"\n");

    // Single Quote
    printf("This is a single quote: \'\n");

    // Null Character
    char str[] = "Hello\0World";
    printf("%s\n", str);

    return 0;
}

