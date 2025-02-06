#include <stdio.h>

// Function to check if a number is Armstrong
int isArmstrong(int num) {
    int temp, remainder, sum = 0;
    int digits = 0;

    // Calculate the number of digits in the number
    temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Calculate the sum of the digits raised to the power of the number of digits
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += (int) (remainder * (long long) pow(remainder, digits));
        temp /= 10;
    }

    // Check if the sum is equal to the original number
    if (sum == num) {
        return 1; // number is Armstrong
    } else {
        return 0; // number is not Armstrong
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

