#include <stdio.h>

void switchOddEven(int arr[3][3]) {
    int temp;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] % 2 == 0) {
                // If the element is even, find the next odd element and swap
                for (int x = i; x < 3; x++) {
                    for (int y = (x == i) ? j + 1 : 0; y < 3; y++) {
                        if (arr[x][y] % 2 != 0) {
                            // Swap the even and odd elements
                            temp = arr[i][j];
                            arr[i][j] = arr[x][y];
                            arr[x][y] = temp;
                            break;
                        }
                    }
                }
            } else {
                // If the element is odd, find the next even element and swap
                for (int x = i; x < 3; x++) {
                    for (int y = (x == i) ? j + 1 : 0; y < 3; y++) {
                        if (arr[x][y] % 2 == 0) {
                            // Swap the odd and even elements
                            temp = arr[i][j];
                            arr[i][j] = arr[x][y];
                            arr[x][y] = temp;
                            break;
                        }
                    }
                }
            }
        }
    }
}

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original Array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Switch odd and even elements
    switchOddEven(arr);

    printf("\nArray after switching odd and even elements:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}