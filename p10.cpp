#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Allocate memory for the array using calloc
    arr = (int *)calloc(size, sizeof(int)); // Using calloc

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Return with error code
    }

    // Input elements into the array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Output elements of the array
    printf("Elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(arr);

    return 0;
}

