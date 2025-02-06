#include <stdio.h>

// Function to calculate GCD using Euclidean algorithm
int calculateGCD(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    }
    return calculateGCD(num2, num1 % num2);
}

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    int gcd = calculateGCD(num1, num2);

    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}
