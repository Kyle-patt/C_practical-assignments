#include <stdio.h>
#include <math.h>

// Function to calculate series sum
double calculateSeriesSum(double x, int n) {
    double sum = 0.0;
    double sign = 1.0;

    for (int i = 1; i <= n; i++) {
        sum += sign * pow(x, i) / i;
        sign *= -1.0;
    }

    return sum;
}

int main() {
    double x;
    int n;

    printf("Enter the value of X: ");
    scanf("%lf", &x);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    double seriesSum = calculateSeriesSum(x, n);

    printf("Sum of the series: %.6f\n", seriesSum);

    return 0;
}

