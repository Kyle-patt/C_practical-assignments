#include <stdio.h>

// Function to calculate sum
int calculateSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int sum = calculateSum(n);
        printf("Sum of first %d natural numbers: %d\n", n, sum);
    }

    return 0;
}

