#include <stdio.h>
#include <math.h>

int main() {
    // Declare a variable to store the radius of the sphere
    double radius;

    // Prompt the user to enter the radius
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    // Check if the entered radius is non-negative
    if (radius < 0) {
        printf("Please enter a non-negative radius.\n");
        return 1; // Exit with an error code
    }

    // Calculate the volume of the sphere
    double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

    // Display the result
    printf("Volume of the sphere with radius %.2lf is: %.2lf\n", radius, volume);

    return 0;
}

