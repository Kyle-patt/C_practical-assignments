#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pyramid

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = rows - i; j > 0; j--) {
            printf("  "); // Two spaces for alignment
        }

        // Print numbers
        for (int k = 1; k <= i; k++) {
            printf("%d ", k);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}