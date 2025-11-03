//WAP TO FIND THE SUM OF THE SERIES..

#include <stdio.h>

int main() {
    int n, i;
    float numerator = 2, denominator = 3, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (numerator / denominator);

        numerator = numerator + 2;     // numerator increases by 2 each time
        denominator = denominator + 4; // denominator increases by 4 each time
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}
