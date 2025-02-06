#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input: Number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input: Numbers to be added
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        sum += num; // Add each number to the sum
    }

    // Output: Display the sum
    printf("The sum of the numbers is: %d\n", sum);

    return 0;
}