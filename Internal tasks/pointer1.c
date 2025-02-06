#include <stdio.h>

// Function to calculate area and perimeter using pointers
void calculateRectangle(float length, float width, float *area, float *perimeter) {
    *area = length * width;          // Calculate area
    *perimeter = 2 * (length + width); // Calculate perimeter
}

int main() {
    float length, width, area, perimeter;

    // Input length and width of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate area and perimeter using the function
    calculateRectangle(length, width, &area, &perimeter);

    // Output the results
    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}