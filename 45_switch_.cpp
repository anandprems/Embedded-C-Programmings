#include <stdio.h>

int main() {
    char grade = 'B';

    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Good!\n");
            break;
        case 'C':
            printf("Fair.\n");
            break;
        case 'D':
            printf("Needs improvement.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }

    return 0;
}

