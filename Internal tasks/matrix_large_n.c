#include <stdio.h>

// Function to find the largest number in a 3x3 matrix
int findLargest(int matrix[3][3]) {
    int largest = matrix[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] > largest) {
                largest = matrix[i][j];
            }
        }
    }
    return largest;
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

    int largest = findLargest(matrix);
    printf("Largest number in the matrix: %d\n", largest);

    return 0;
}
