#include <stdio.h>

int main() {
    int n, search_element, frequency = 0;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &search_element);

    // Search for the element and calculate its frequency
    for (int i = 0; i < n; i++) {
        if (arr[i] == search_element) {
            frequency++;
        }
    }

    // Display the result
    if (frequency > 0) {
        printf("Element %d is present in the array.\n", search_element);
        printf("Frequency of %d is: %d\n", search_element, frequency);
    } else {
        printf("Element %d is not present in the array.\n", search_element);
    }

    return 0;
}