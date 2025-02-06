#include <stdio.h>

// Function to calculate transpose of a matrix
void calculateTranspose(int matrix[3][3], int transpose[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[3][3];
    int transpose[3][3];

    printf("Enter elements of 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Original Matrix:\n");
    printMatrix(matrix);

    calculateTranspose(matrix, transpose);

    printf("Transpose of Matrix:\n");
    printMatrix(transpose);

    return 0;
}

