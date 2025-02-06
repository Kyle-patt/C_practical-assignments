#include <stdio.h>

int main() {
    int number, i;
    unsigned long long factorial = 1;

    // Input a number
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (i = 1; i <= number; i++) {
            factorial *= i;
        }
        // Output the factorial
        printf("Factorial of %d = %llu\n", number, factorial);
    }

    return 0;
}