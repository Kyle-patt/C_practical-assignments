#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for columns
        for (int j = 1; j <= i; j++) {
            printf("%d ", j); // Print numbers from 1 to i
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}