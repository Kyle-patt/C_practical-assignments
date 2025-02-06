#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter the first number (a): ");
    scanf("%d", &a);

    printf("Enter the second number (b): ");
    scanf("%d", &b);

    // Swapping logic without using a third variable
    a = a + b; // Step 1: a now holds the sum of a and b
    b = a - b; // Step 2: b now holds the original value of a
    a = a - b; // Step 3: a now holds the original value of b

    // Output the swapped values
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}