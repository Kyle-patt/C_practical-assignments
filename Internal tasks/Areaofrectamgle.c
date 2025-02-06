#include <stdio.h>

int main() {
    float length, width, area;

    // Input length and width of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate the area of the rectangle
    area = length * width;

    // Output the area
    printf("The area of the rectangle is: %.2f\n sq. unit", area);

    return 0;
}