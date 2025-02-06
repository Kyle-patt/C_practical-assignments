#include <stdio.h>

// Function to calculate diagonal sums
void calculateDiagonalSums(int matrix[3][3]) {
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < 3; i++) {
        primaryDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][2 - i];
    }

    printf("Primary Diagonal Sum: %d\n", primaryDiagonalSum);
    printf("Secondary Diagonal Sum: %d\n", secondaryDiagonalSum);
}

int main() {
    int matrix[3][3];

    printf("Enter elements of 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    calculateDiagonalSums(matrix);

    return 0;
}
