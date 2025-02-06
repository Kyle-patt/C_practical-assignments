#include <stdio.h>

int main() {
    int rows = 4; // Number of rows in the upper half of the diamond

    // Upper half of the diamond
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}