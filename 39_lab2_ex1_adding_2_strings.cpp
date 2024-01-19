#include <stdio.h>
#include <string.h>

int main() {
    // Declare arrays to store two strings
    char str1[100], str2[100];

    // Prompt the user to enter the first string
    printf("Enter the first string: ");
    scanf("%s", str1);

    // Prompt the user to enter the second string
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Concatenate the two strings
    strcat(str1, str2);

    // Display the result
    printf("Concatenated string: %s\n", str1);

    return 0;
}

