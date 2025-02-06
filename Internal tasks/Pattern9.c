#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pyramid
    char currentChar;

    for (int i = 1; i <= rows; i++) {
        currentChar = 'A'; // Reset to 'A' for each row

        // Print letters
        for (int j = 1; j <= i; j++) {
            printf("%c ", currentChar);
            currentChar++; // Move to the next letter
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}