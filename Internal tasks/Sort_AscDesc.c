#include <stdio.h>

// Function to find the largest and smallest numbers in the array
void findLargestAndSmallest(int arr[], int size, int *largest, int *smallest) {
    *largest = arr[0];
    *smallest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *largest) {
            *largest = arr[i];
        }
        if (arr[i] < *smallest) {
            *smallest = arr[i];
        }
    }
}

// Function to sort the array in ascending order (using Bubble Sort)
void sortAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to sort the array in descending order (using Bubble Sort)
void sortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest, smallest;

    // Find the largest and smallest numbers
    findLargestAndSmallest(arr, size, &largest, &smallest);
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    // Sort the array in ascending order
    sortAscending(arr, size);
    printf("\nArray in ascending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Sort the array in descending order
    sortDescending(arr, size);
    printf("\nArray in descending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}