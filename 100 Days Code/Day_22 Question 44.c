// WAP TO FIND THE SUM OF THE SERIES..

#include <stdio.h>

int main() {
    int n, i;
    float numerator = 1, denominator = 2, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (numerator / denominator);
        numerator = numerator + 2;     
        denominator = denominator + 2; 
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);
    
    return 0;
}
