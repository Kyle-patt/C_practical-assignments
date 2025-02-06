#include <stdio.h>
#include <math.h>

double calculate_sum(int n) {
    double sum = 0.0;
    double factorial = 1.0;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        sum += 1.0 / factorial;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    double sum = calculate_sum(n);
    printf("The sum of the series is: %.6f\n", sum);

    printf("Approximate value of e: %.6f\n", exp(1.0));

    return 0;
}