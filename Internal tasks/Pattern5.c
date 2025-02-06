#include <stdio.h>

int main() {
    int rows = 5, cols = 5;

    // Nested loop to print the pattern
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            printf("%d ", j); // Print numbers from 1 to 5
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}