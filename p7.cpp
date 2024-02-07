#include <stdio.h>

int* getArray(int size);

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Call the function to get the array
    int *arr = getArray(size);

    printf("Entered array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// Function to get array elements and return array using pointer
int* getArray(int size) {
    static int arr[100]; 

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    return arr;
}

