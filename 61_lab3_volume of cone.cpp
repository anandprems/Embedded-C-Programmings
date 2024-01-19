#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables to store the radius and height of the cone
    float radius, height;

    // Prompt the user to enter the radius of the cone
    printf("Enter the radius of the cone: ");
    scanf("%f", &radius);

    // Prompt the user to enter the height of the cone
    printf("Enter the height of the cone: ");
    scanf("%f", &height);

    // Check if the entered radius and height are non-negative
    if (radius < 0 || height < 0) {
        printf("Please enter non-negative values for radius and height.\n");
        return 1; // Exit with an error code
    }

    // Calculate the volume of the cone
    float volume = (1.0 / 3.0) * M_PI * pow(radius, 2) * height;

    // Display the result
    printf("Volume of the cone with radius %.2f and height %.2f is: %.2f\n", radius, height, volume);

    return 0;
}

